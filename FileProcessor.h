/*
Stephanie Munday
2343625
smunday@chapman.edu
CPSC-350-08
Assignment 2
*/

//Header file for FileProcessor

#ifndef FILE_PROCESSOR_H
#define FILE_PROCESSOR_H

#include <string>
#include <iostream>
#include <fstream>

class FileProcessor {
  public:
    FileProcessor();
    ~FileProcessor();
    void processFile(std::string fileIn, std::string fileOut);
    void processFileTut(std::string fileIn, std::string fileOut);
};

#endif
