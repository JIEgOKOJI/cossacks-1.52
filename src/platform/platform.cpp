// platform/platform.cpp
// Cross-platform implementations
// Each function has a Windows and POSIX path

#include "platform.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ============================================================================
// NETWORKING
// ============================================================================

#ifdef _WIN32
    #include <Winsock2.h>
    #include <WS2tcpip.h>
    #include <iphlpapi.h>
    #pragma comment(lib, "ws2_32.lib")
    #pragma comment(lib, "iphlpapi.lib")

int platform_net_init(void) {
    WSADATA wsaData;
    return WSAStartup(MAKEWORD(2, 2), &wsaData) == 0 ? 0 : -1;
}

void platform_net_cleanup(void) {
    WSACleanup();
}

int platform_set_nonblocking(PlatformSocket sock, int enable) {
    u_long mode = enable ? 1 : 0;
    return ioctlsocket(sock, FIONBIO, &mode) == 0 ? 0 : -1;
}

int platform_bytes_available(PlatformSocket sock) {
    u_long bytes = 0;
    if (ioctlsocket(sock, FIONREAD, &bytes) != 0)
        return -1;
    return (int)bytes;
}

int platform_get_local_addresses(uint32_t* addrs, int max_count) {
    PIP_ADAPTER_ADDRESSES pAddresses = NULL;
    ULONG outBufLen = 15000;
    ULONG flags = GAA_FLAG_SKIP_ANYCAST | GAA_FLAG_SKIP_MULTICAST | GAA_FLAG_SKIP_DNS_SERVER;
    int count = 0;

    pAddresses = (PIP_ADAPTER_ADDRESSES)malloc(outBufLen);
    if (!pAddresses) return 0;

    if (GetAdaptersAddresses(AF_INET, flags, NULL, pAddresses, &outBufLen) != NO_ERROR) {
        free(pAddresses);
        pAddresses = (PIP_ADAPTER_ADDRESSES)malloc(outBufLen);
        if (!pAddresses) return 0;
        if (GetAdaptersAddresses(AF_INET, flags, NULL, pAddresses, &outBufLen) != NO_ERROR) {
            free(pAddresses);
            return 0;
        }
    }

    PIP_ADAPTER_ADDRESSES pCurr = pAddresses;
    while (pCurr && count < max_count) {
        if (pCurr->IfType != IF_TYPE_SOFTWARE_LOOPBACK &&
            pCurr->OperStatus == IfOperStatusUp) {
            PIP_ADAPTER_UNICAST_ADDRESS pUnicast = pCurr->FirstUnicastAddress;
            while (pUnicast && count < max_count) {
                struct sockaddr_in* sa = (struct sockaddr_in*)pUnicast->Address.lpSockaddr;
                if (sa->sin_family == AF_INET) {
                    addrs[count++] = sa->sin_addr.s_addr;
                }
                pUnicast = pUnicast->Next;
            }
        }
        pCurr = pCurr->Next;
    }

    free(pAddresses);
    return count;
}

#else // POSIX (macOS, Linux)

int platform_net_init(void) {
    // BSD sockets don't need initialization
    return 0;
}

void platform_net_cleanup(void) {
    // Nothing to do
}

int platform_set_nonblocking(PlatformSocket sock, int enable) {
    int flags = fcntl(sock, F_GETFL, 0);
    if (flags == -1) return -1;
    if (enable)
        flags |= O_NONBLOCK;
    else
        flags &= ~O_NONBLOCK;
    return fcntl(sock, F_SETFL, flags) == 0 ? 0 : -1;
}

int platform_bytes_available(PlatformSocket sock) {
    int bytes = 0;
    if (ioctl(sock, FIONREAD, &bytes) < 0)
        return -1;
    return bytes;
}

int platform_get_local_addresses(uint32_t* addrs, int max_count) {
    struct ifaddrs* ifaddr;
    int count = 0;

    if (getifaddrs(&ifaddr) == -1)
        return 0;

    for (struct ifaddrs* ifa = ifaddr; ifa && count < max_count; ifa = ifa->ifa_next) {
        if (!ifa->ifa_addr) continue;
        if (ifa->ifa_addr->sa_family != AF_INET) continue;
        if (ifa->ifa_flags & IFF_LOOPBACK) continue;
        if (!(ifa->ifa_flags & IFF_UP)) continue;

        struct sockaddr_in* sa = (struct sockaddr_in*)ifa->ifa_addr;
        addrs[count++] = sa->sin_addr.s_addr;
    }

    freeifaddrs(ifaddr);
    return count;
}

#endif // _WIN32

// ============================================================================
// TIME
// ============================================================================

#ifdef _WIN32

uint32_t platform_get_ticks_ms(void) {
    return GetTickCount();
}

#elif defined(__APPLE__)

    #include <mach/mach_time.h>

static uint64_t _timebase_numer = 0;
static uint64_t _timebase_denom = 0;

uint32_t platform_get_ticks_ms(void) {
    if (_timebase_numer == 0) {
        mach_timebase_info_data_t info;
        mach_timebase_info(&info);
        _timebase_numer = info.numer;
        _timebase_denom = info.denom;
    }
    uint64_t now = mach_absolute_time();
    uint64_t ns = now * _timebase_numer / _timebase_denom;
    return (uint32_t)(ns / 1000000ULL);
}

#else // Linux

    #include <time.h>

uint32_t platform_get_ticks_ms(void) {
    struct timespec ts;
    clock_gettime(CLOCK_MONOTONIC, &ts);
    return (uint32_t)(ts.tv_sec * 1000 + ts.tv_nsec / 1000000);
}

#endif

// ============================================================================
// SYSTEM
// ============================================================================

#ifdef _WIN32

void platform_get_hostname(char* buf, int max_len) {
    DWORD size = (DWORD)max_len;
    if (!GetComputerNameA(buf, &size)) {
        strncpy(buf, "Unknown", max_len - 1);
        buf[max_len - 1] = '\0';
    }
}

#else

    #include <unistd.h>

void platform_get_hostname(char* buf, int max_len) {
    if (gethostname(buf, max_len) != 0) {
        strncpy(buf, "Unknown", max_len - 1);
        buf[max_len - 1] = '\0';
    }
}

#endif

// ============================================================================
// CONFIG (Registry on Windows, file-based on POSIX)
// ============================================================================

#ifdef _WIN32

int platform_config_read(const char* key, char* value, int max_len) {
    HKEY hKey;
    DWORD type, size = (DWORD)max_len;
    if (RegOpenKeyExA(HKEY_CURRENT_USER, "Software\\GSC Game World", 0, KEY_READ, &hKey) != ERROR_SUCCESS)
        return 0;
    LONG result = RegQueryValueExA(hKey, key, NULL, &type, (LPBYTE)value, &size);
    RegCloseKey(hKey);
    return (result == ERROR_SUCCESS) ? 1 : 0;
}

int platform_config_write(const char* key, const char* value) {
    HKEY hKey;
    if (RegCreateKeyExA(HKEY_CURRENT_USER, "Software\\GSC Game World", 0, NULL, 0,
                        KEY_WRITE, NULL, &hKey, NULL) != ERROR_SUCCESS)
        return 0;
    LONG result = RegSetValueExA(hKey, key, 0, REG_SZ, (const BYTE*)value, (DWORD)(strlen(value) + 1));
    RegCloseKey(hKey);
    return (result == ERROR_SUCCESS) ? 1 : 0;
}

#else

    #include <sys/stat.h>

// Config directory path
static const char* _get_config_dir(void) {
    static char path[512] = {0};
    if (path[0] == '\0') {
        const char* home = getenv("HOME");
        if (!home) home = "/tmp";
#ifdef __APPLE__
        snprintf(path, sizeof(path), "%s/Library/Application Support/GSC", home);
#else
        snprintf(path, sizeof(path), "%s/.config/gsc", home);
#endif
        mkdir(path, 0755);
    }
    return path;
}

int platform_config_read(const char* key, char* value, int max_len) {
    char filepath[600];
    snprintf(filepath, sizeof(filepath), "%s/%s", _get_config_dir(), key);

    FILE* f = fopen(filepath, "r");
    if (!f) return 0;

    char* result = fgets(value, max_len, f);
    fclose(f);

    if (result) {
        // Strip trailing newline
        size_t len = strlen(value);
        if (len > 0 && value[len - 1] == '\n')
            value[len - 1] = '\0';
        return 1;
    }
    return 0;
}

int platform_config_write(const char* key, const char* value) {
    char filepath[600];
    snprintf(filepath, sizeof(filepath), "%s/%s", _get_config_dir(), key);

    FILE* f = fopen(filepath, "w");
    if (!f) return 0;

    fputs(value, f);
    fclose(f);
    return 1;
}

#endif
