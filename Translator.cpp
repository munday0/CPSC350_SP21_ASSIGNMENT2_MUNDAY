/*
Stephanie Munday
2343625
smunday@chapman.edu
CPSC-350-08
Assignment 2
*/

//Cpp file for Translator

#include "Translator.h"
#include "Model.h"

Translator::Translator() {
  // default constructor
}

Translator::~Translator() {
  // default destructor
}

//translates an English word to Tutnese
std::string Translator::translateEnglishWord(std::string str) {
  std::string translatedWord = "";
  Model englishWord;

  for (int i = 0; i < str.size(); ++i) {
    if (str[i] == str[i+1]) { // checks to see if there is a repeated character to determine which translation function to use
      translatedWord += englishWord.translateDoubleCharacter((char)str[i]);
      i++; // skips the repeated character so that it is not translated twice
    }
    else {
      translatedWord += englishWord.translateSingleCharacter((char)str[i]);
    }
  }
  return translatedWord;
}

//translates an English sentence to Tutnese
std::string Translator::translateEnglishSentence(std::string str2) {
  std::string translatedSentence = "";
  std::string word;
  str2 += " "; // gets rid of special case for last word in input, doesn't work if no space afterwards
  for (int i = 0; i < str2.size(); ++i) {

    // split by spaces so can call translateEnglishWord
    if (!((char)str2[i] == ' ')) {
      word += str2[i];
    }
    else {
      translatedSentence += translateEnglishWord(word);
      translatedSentence += " ";
      word = "";
    }
  }
  return translatedSentence;
}

//Translates a Tutnese word or sentence to English
std::string Translator::translateTut(std::string str3) {
  std::string doubleTranslated = "";
  std::string fullTranslated = "";
  Model tutWord;

  doubleTranslated += tutWord.translateTutDouble(str3);
  fullTranslated += tutWord.translateTutSingle(doubleTranslated);

  return fullTranslated;
}
