/*
Stephanie Munday
2343625
smunday@chapman.edu
CPSC-350-08
Assignment 2
*/

//Main

#include "Model.h"
#include "Translator.h"
#include "FileProcessor.h"
#include <iostream>

using namespace std;

int main(int argc, char **argv) {

  FileProcessor fileProcessor;
  string inputFile = "";
  string outputFile = "";
  string choice = "";

  cout << "Input file name with .txt at the end: " << endl;
  cin >> inputFile;

  cout << "Output file name with .txt at the end: " << endl;
  cin >> outputFile;

  cout << "Choose: E2T or T2E " << endl;
  cin >> choice;

  if (choice == "E2T") {
    fileProcessor.processFile(inputFile, outputFile);
  }
  else if (choice == "T2E") {
    fileProcessor.processFileTut(inputFile, outputFile);
  }
  else {
    cout << "Your choice was invalid." << endl;
  }
  return 0;
}
