/*
Stephanie Munday
2343625
smunday@chapman.edu
CPSC-350-08
Assignment 2
*/

//Cpp file for FileProcessor

#include "FileProcessor.h"
#include "Translator.h"

FileProcessor::FileProcessor() {
  // default constructor
}

FileProcessor::~FileProcessor() {
  // default destructor
}

//takes a file as input and translates from English to Tutnese, then outputs the translation to another file
void FileProcessor::processFile(std::string fileIn, std::string fileOut) {
  // create and/or open files to read/write to
  std::ifstream readFile;
  readFile.open(fileIn);

  std::ofstream writeFile;
  writeFile.open(fileOut);

  std::string toConvert = "";
  std::string toWrite = "";
  Translator translator;

  if (readFile.is_open()) { // checks to see if file exists/is open
    while (getline(readFile, toConvert)) { // stores the line in the string variable toConvert, which is used by the translator
      toWrite = translator.translateEnglishSentence(toConvert);
      writeFile << toWrite;
    }
    readFile.close();
  }
  else { // in the case that the file doesn't exist/isn't open
    toWrite = "The input file name you entered does not exist. Try again.";
    writeFile << toWrite;
  }
  writeFile.close();
}

//takes a file as input and translates from Tutnese to English, then outputs the translation to another file
void FileProcessor::processFileTut(std::string fileIn, std::string fileOut) {
  // create and/or open files to read/write to
  std::ifstream readFile;
  readFile.open(fileIn);

  std::ofstream writeFile;
  writeFile.open(fileOut);

  std::string toConvert = "";
  std::string toWrite = "";
  Translator translator;

  if (readFile.is_open()) { // checks to see if file exists/is open
    while (getline(readFile, toConvert)) { // stores the line in the string variable toConvert, which is used by the translator
      toWrite = translator.translateTut(toConvert);
      writeFile << toWrite;
    }
    readFile.close();
  }
  else { // in the case that the file doesn't exist/isn't open
    toWrite = "The input file name you entered does not exist. Try again.";
    writeFile << toWrite;
  }
  writeFile.close();
}
