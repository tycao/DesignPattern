#include "compiler.h"
#include "scanner.h"
#include "parser.h"
#include "genmidcode.h"
#include "genmachinecode.h"

Compiler::Run() {
    Scanner scan;
    Parser parse;
    GenMachineCode genmachinecode;
    GenMidCode genmidcode;

    scan.Scan();
    parse.Parse();
    genmachinecode.GenCode();
    genmidcode.GenCode();
}
