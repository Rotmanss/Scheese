#include <iostream>

#include "FileManager.h"
#include "Parser.h"


// Pevnyi Roman TK-31; Variant 10


int main()
{
    FileManager fm;
    fm.ReadFromFile();

    std::cout << "File content:\n" << fm.GetText() << "\n\n";
    
    Parser parser;
    parser.Parse(fm.GetText());
    parser.PrintResults();

    return 0;
}