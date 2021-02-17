/*
Stephanie Munday
2343625
smunday@chapman.edu
CPSC-350-08
Assignment 2
*/

//Header file for Model

#ifndef MODEL_H
#define MODEL_H

#include <string>
#include <cctype>

class Model {
  public:
    Model();
    ~Model();
    std::string translateSingleCharacter(char chr);
    std::string translateDoubleCharacter(char chr2);
    std::string translateTutSingle(std::string str1);
    std::string translateTutDouble(std::string str2);
};

#endif
