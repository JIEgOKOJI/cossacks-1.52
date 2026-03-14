# Ghidra headless Jython script: decompile all functions from a DLL
# Usage: analyzeHeadless /tmp/ghidra_proj proj -import Mission.dll -postScript ghidra_decompile.py
# @category Decompile

from ghidra.app.decompiler import DecompInterface
from ghidra.util.task import ConsoleTaskMonitor
import java.io.File as File
import os

decomp = DecompInterface()
decomp.openProgram(currentProgram)
monitor = ConsoleTaskMonitor()

funcMgr = currentProgram.getFunctionManager()

outDir = os.environ.get("GHIDRA_OUT_DIR", "/tmp/ghidra_out")
if not os.path.exists(outDir):
    os.makedirs(outDir)
outName = currentProgram.getName().replace(".dll", "") + "_decompiled.c"
outPath = os.path.join(outDir, outName)

f = open(outPath, "w")
f.write("// Decompiled from: %s\n\n" % currentProgram.getName())

funcs = funcMgr.getFunctions(True)
while funcs.hasNext():
    func = funcs.next()
    name = func.getName()
    results = decomp.decompileFunction(func, 60, monitor)
    if results is not None and results.depiledFunction() is not None:
        f.write("// Function: %s @ 0x%s\n" % (name, func.getEntryPoint()))
        f.write(results.getDecompiledFunction().getC())
        f.write("\n\n")
    elif results is not None and results.getDecompiledFunction() is not None:
        f.write("// Function: %s @ 0x%s\n" % (name, func.getEntryPoint()))
        f.write(results.getDecompiledFunction().getC())
        f.write("\n\n")

f.close()
print("Decompiled to: %s" % outPath)
