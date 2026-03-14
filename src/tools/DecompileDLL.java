//Ghidra headless Java script: decompile all functions from a DLL
//@category Decompile
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.decompiler.DecompiledFunction;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.util.task.ConsoleTaskMonitor;
import java.io.*;

public class DecompileDLL extends GhidraScript {
    @Override
    public void run() throws Exception {
        DecompInterface decomp = new DecompInterface();
        decomp.openProgram(currentProgram);

        String outDir = System.getenv("GHIDRA_OUT_DIR");
        if (outDir == null) outDir = "/tmp/ghidra_out";
        new File(outDir).mkdirs();

        String name = currentProgram.getName().replace(".dll", "") + "_decompiled.c";
        File outFile = new File(outDir, name);

        PrintWriter pw = new PrintWriter(new FileWriter(outFile));
        pw.println("// Decompiled from: " + currentProgram.getName());
        pw.println();

        FunctionIterator funcs = currentProgram.getFunctionManager().getFunctions(true);
        while (funcs.hasNext()) {
            Function func = funcs.next();
            if (func.isThunk()) continue;
            DecompileResults results = decomp.decompileFunction(func, 60, monitor);
            DecompiledFunction df = results.getDecompiledFunction();
            if (df != null) {
                pw.println("// Function: " + func.getName() + " @ 0x" + func.getEntryPoint());
                pw.println(df.getC());
                pw.println();
            }
        }
        pw.close();
        println("Decompiled to: " + outFile.getAbsolutePath());
    }
}
