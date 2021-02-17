/*
Stephanie Munday
2343625
smunday@chapman.edu
CPSC-350-08
Assignment 2
*/

//Header file for Translator

#ifndef TRANSLATOR_H
#define TRANSLATOR_H

#include <string>

class Translator {
  public:
    Translator();
    ~Translator();
    std::string translateEnglishWord(std::string str);
    std::string translateEnglishSentence(std::string str2);
    std::string translateTut(std::string str3);
};

#endif
