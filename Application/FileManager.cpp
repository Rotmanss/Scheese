#include <iostream>
#include <fstream>
#include <sstream>

#include "FileManager.h"


void FileManager::ReadFromFile()
{
    try
    {
        std::ifstream inputFile;
        inputFile.open("Application/examples/str.txt");

        if (!inputFile.is_open()) {
            throw std::runtime_error("Failed to open the file.");
        }

        std::stringstream buffer;
        buffer << inputFile.rdbuf();
        m_Text = buffer.str();
        inputFile.close();
    }
    catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
    }
}
