/*******************************************************
* Author: Abdullah Abdelhakeem
* Date: September 30, 2023
* Description: Create A class that can that can be use to make backtrace for calling functions
*
* Type: Task
* Language: C++
* Dependencies: None
* IDE: VS Code
* Compiler: G++
* OS: Windows 10
*
* Inputs:
* Outputs:
*
* Algorithm:
*   1.
*
* Note:
*    g++ .\T22.cc -ldbghelp
*    nm a.exe
*    objdump -t a.exe
*******************************************************/

#include <iostream>
#include <windows.h>
#include <dbghelp.h>
#pragma comment(lib, "dbghelp.lib")

class BacktraceGenerator {
public:
    static void printBacktrace() {
        const int maxBacktraceFrames = 20;  // Maximum number of backtrace frames

        void* backtraceArray[maxBacktraceFrames];
        USHORT numFrames = CaptureStackBackTrace(0, maxBacktraceFrames, backtraceArray, NULL);

        SYMBOL_INFO* symbol = (SYMBOL_INFO *)malloc(sizeof(SYMBOL_INFO) + 256 * sizeof(char));
        symbol->MaxNameLen = 255;
        symbol->SizeOfStruct = sizeof(SYMBOL_INFO);

        std::cout << "Backtrace:\n";

        for (USHORT i = 0; i < numFrames; ++i) {
            SymFromAddr(GetCurrentProcess(), (DWORD64)(backtraceArray[i]), 0, symbol);
            std::cout << "[" << i << "] " << symbol->Name << " (0x" << backtraceArray[i] << ")\n";
        }

        free(symbol);
    }
};

void thirdFunction() {
    BacktraceGenerator::printBacktrace();
}

void secondFunction() {
    thirdFunction();
}

void firstFunction() {
    secondFunction();
}

int main() {
    firstFunction();

    return 0;
}
