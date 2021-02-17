/*
Stephanie Munday
2343625
smunday@chapman.edu
CPSC-350-08
Assignment 2
*/

//Cpp file for Model

#include "Model.h"

Model::Model() {
  //default constructor
}

Model::~Model() {
  //default destructor
}

//translates a single English character to Tutnese
std::string Model::translateSingleCharacter(char chr) {
  std::string translatedSingle = "";
  if (isupper(chr)) {
    switch (chr) { // accounts for each possible uppercase letter
      case 'A':
        translatedSingle = "A";
        break;
      case 'B':
        translatedSingle = "Bub";
        break;
      case 'C':
        translatedSingle = "Cash";
        break;
      case 'D':
        translatedSingle = "Dud";
        break;
      case 'E':
        translatedSingle = "E";
        break;
      case 'F':
        translatedSingle = "Fuf";
        break;
      case 'G':
        translatedSingle = "Gug";
        break;
      case 'H':
        translatedSingle = "Hash";
        break;
      case 'I':
        translatedSingle = "I";
        break;
      case 'J':
        translatedSingle = "Jay";
        break;
      case 'K':
        translatedSingle = "Kuck";
        break;
      case 'L':
        translatedSingle = "Lul";
        break;
      case 'M':
        translatedSingle = "Mum";
        break;
      case 'N':
        translatedSingle = "Nun";
        break;
      case 'O':
        translatedSingle = "O";
        break;
      case 'P':
        translatedSingle = "Pub";
        break;
      case 'Q':
        translatedSingle = "Quack";
        break;
      case 'R':
        translatedSingle = "Rug";
        break;
      case 'S':
        translatedSingle = "Sus";
        break;
      case 'T':
        translatedSingle = "Tut";
        break;
      case 'U':
        translatedSingle = "U";
        break;
      case 'V':
        translatedSingle = "Vuv";
        break;
      case 'W':
        translatedSingle = "Wack";
        break;
      case 'X':
        translatedSingle = "Ex";
        break;
      case 'Y':
        translatedSingle = "Yub";
        break;
      case 'Z':
        translatedSingle = "Zub";
        break;
      default :
        translatedSingle = chr;
    }
  }
  else {
    switch (chr) { // accounts for each possible lowercase letter
      case 'a':
        translatedSingle = "a";
        break;
      case 'b':
        translatedSingle = "bub";
        break;
      case 'c':
        translatedSingle = "cash";
        break;
      case 'd':
        translatedSingle = "dud";
        break;
      case 'e':
        translatedSingle = "e";
        break;
      case 'f':
        translatedSingle = "fuf";
        break;
      case 'g':
        translatedSingle = "gug";
        break;
      case 'h':
        translatedSingle = "hash";
        break;
      case 'i':
        translatedSingle = "i";
        break;
      case 'j':
        translatedSingle = "jay";
        break;
      case 'k':
        translatedSingle = "kuck";
        break;
      case 'l':
        translatedSingle = "lul";
        break;
      case 'm':
        translatedSingle = "mum";
        break;
      case 'n':
        translatedSingle = "nun";
        break;
      case 'o':
        translatedSingle = "o";
        break;
      case 'p':
        translatedSingle = "pub";
        break;
      case 'q':
        translatedSingle = "quack";
        break;
      case 'r':
        translatedSingle = "rug";
        break;
      case 's':
        translatedSingle = "sus";
        break;
      case 't':
        translatedSingle = "tut";
        break;
      case 'u':
        translatedSingle = "u";
        break;
      case 'v':
        translatedSingle = "vuv";
        break;
      case 'w':
        translatedSingle = "wack";
        break;
      case 'x':
        translatedSingle = "ex";
        break;
      case 'y':
        translatedSingle = "yub";
        break;
      case 'z':
        translatedSingle = "zub";
        break;
      default :
        translatedSingle = chr; // accounts for characters that aren't letters & don't need to be translated
    }
  }

  return translatedSingle;
}

//translates a repeated English character to Tutnese
std::string Model::translateDoubleCharacter(char chr2) {
  std::string translatedDouble = "";
  if (isupper(chr2)) {
    switch (chr2) { // accounts for each possible uppercase letter
      case 'A':
        translatedDouble = "Squata";
        break;
      case 'B':
        translatedDouble = "Squab";
        break;
      case 'C':
        translatedDouble = "Squac";
        break;
      case 'D':
        translatedDouble = "Squad";
        break;
      case 'E':
        translatedDouble = "Squate";
        break;
      case 'F':
        translatedDouble = "Squaf";
        break;
      case 'G':
        translatedDouble = "Squag";
        break;
      case 'H':
        translatedDouble = "Squah";
        break;
      case 'I':
        translatedDouble = "Squati";
        break;
      case 'J':
        translatedDouble = "Squaj";
        break;
      case 'K':
        translatedDouble = "Squak";
        break;
      case 'L':
        translatedDouble = "Squal";
        break;
      case 'M':
        translatedDouble = "Squam";
        break;
      case 'N':
        translatedDouble = "Squan";
        break;
      case 'O':
        translatedDouble = "Squato";
        break;
      case 'P':
        translatedDouble = "Squap";
        break;
      case 'Q':
        translatedDouble = "Squaq";
        break;
      case 'R':
        translatedDouble = "Squar";
        break;
      case 'S':
        translatedDouble = "Squas";
        break;
      case 'T':
        translatedDouble = "Squat";
        break;
      case 'U':
        translatedDouble = "Squatu";
        break;
      case 'V':
        translatedDouble = "Squav";
        break;
      case 'W':
        translatedDouble = "Squaw";
        break;
      case 'X':
        translatedDouble = "Squax";
        break;
      case 'Y':
        translatedDouble = "Squay";
        break;
      case 'Z':
        translatedDouble = "Squaz";
        break;
      default :
        translatedDouble = chr2;
    }
  }
  else {
    switch (chr2) { // accounts for each possible lowercase letter
      case 'a':
        translatedDouble = "squata";
        break;
      case 'b':
        translatedDouble = "squab";
        break;
      case 'c':
        translatedDouble = "squac";
        break;
      case 'd':
        translatedDouble = "squad";
        break;
      case 'e':
        translatedDouble = "squate";
        break;
      case 'f':
        translatedDouble = "squaf";
        break;
      case 'g':
        translatedDouble = "squag";
        break;
      case 'h':
        translatedDouble = "squah";
        break;
      case 'i':
        translatedDouble = "squati";
        break;
      case 'j':
        translatedDouble = "squaj";
        break;
      case 'k':
        translatedDouble = "squak";
        break;
      case 'l':
        translatedDouble = "squal";
        break;
      case 'm':
        translatedDouble = "squam";
        break;
      case 'n':
        translatedDouble = "squan";
        break;
      case 'o':
        translatedDouble = "squato";
        break;
      case 'p':
        translatedDouble = "squap";
        break;
      case 'q':
        translatedDouble = "squaq";
        break;
      case 'r':
        translatedDouble = "squar";
        break;
      case 's':
        translatedDouble = "squas";
        break;
      case 't':
        translatedDouble = "squat";
        break;
      case 'u':
        translatedDouble = "squatu";
        break;
      case 'v':
        translatedDouble = "squav";
        break;
      case 'w':
        translatedDouble = "squaw";
        break;
      case 'x':
        translatedDouble = "squax";
        break;
      case 'y':
        translatedDouble = "squay";
        break;
      case 'z':
        translatedDouble = "squaz";
        break;
      default :
        translatedDouble = chr2; // accounts for characters that aren't letters & don't need to be translated
    }
  }
  return translatedDouble;
}

//translates a Tutnese phrase to its corresponding single English character
std::string Model::translateTutSingle(std::string str1) {
  std::string tutSingle = "";
  //std::string toTranslate = "";
  //std::string nextLetter = "";
  std::string pos1 = "";
  std::string pos2 = "";
  std::string pos3 = "";
  std::string pos4 = "";
  std::string pos5 = "";

  for (int i = 0; i < str1.size(); ++i) {
    //accounting for upper and lowercase vowels first
    pos1 = str1[i];
    pos2 = str1[i+1];
    pos3 = str1[i+2];
    pos4 = str1[i+3];
    pos5 = str1[i+4];

    if (pos1 == "A") {
      tutSingle += "A";
    }
    else if (pos1 == "a") {
      tutSingle += "a";
    }
    else if (((pos1 == "E") && !(pos2 == "x"))) {
      tutSingle += "E";
    }
    else if (((pos1 == "e") && !(pos2 == "x"))) {
      tutSingle += "e";
    }
    else if (pos1 == "I") {
      tutSingle += "I";
    }
    else if (pos1 == "i") {
      tutSingle += "i";
    }
    else if (pos1 == "O") {
      tutSingle += "O";
    }
    else if (pos1 == "o") {
      tutSingle += "o";
    }
    else if (pos1 == "U") {
      tutSingle += "U";
    }
    else if (pos1 == "u") {
      tutSingle += "u";
    }
    //start accounting for consonants
    else if ((pos1 == "B") && (pos2 == "u") && (pos3 == "b")) {
      tutSingle += "B";
      i += 2;
    }
    else if ((pos1 == "b") && (pos2 == "u") && (pos3 == "b")) {
      tutSingle += "b";
      i += 2;
    }
    else if ((pos1 == "C") && (pos2 == "a") && (pos3 == "s") && (pos4 == "h")) {
      tutSingle += "C";
      i += 3;
    }
    else if ((pos1 == "c") && (pos2 == "a") && (pos3 == "s") && (pos4 == "h")) {
      tutSingle += "c";
      i += 3;
    }
    else if ((pos1 == "D") && (pos2 == "u") && (pos3 == "d")) {
      tutSingle += "D";
      i += 2;
    }
    else if ((pos1 == "d") && (pos2 == "u") && (pos3 == "d")) {
      tutSingle += "d";
      i += 2;
    }
    else if ((pos1 == "F") && (pos2 == "u") && (pos3 == "f")) {
      tutSingle += "F";
      i += 2;
    }
    else if ((pos1 == "f") && (pos2 == "u") && (pos3 == "f")) {
      tutSingle += "f";
      i += 2;
    }
    else if ((pos1 == "G") && (pos2 == "u") && (pos3 == "g")) {
      tutSingle += "G";
      i += 2;
    }
    else if ((pos1 == "g") && (pos2 == "u") && (pos3 == "g")) {
      tutSingle += "g";
      i += 2;
    }
    else if ((pos1 == "H") && (pos2 == "a") && (pos3 == "s") && (pos4 == "h")) {
      tutSingle += "H";
      i += 3;
    }
    else if ((pos1 == "h") && (pos2 == "a") && (pos3 == "s") && (pos4 == "h")) {
      tutSingle += "h";
      i += 3;
    }
    else if ((pos1 == "J") && (pos2 == "a") && (pos3 == "y")) {
      tutSingle += "J";
      i += 2;
    }
    else if ((pos1 == "j") && (pos2 == "a") && (pos3 == "y")) {
      tutSingle += "j";
      i += 2;
    }
    else if ((pos1 == "K") && (pos2 == "u") && (pos3 == "c") && (pos4 == "k")) {
      tutSingle += "K";
      i += 3;
    }
    else if ((pos1 == "k") && (pos2 == "u") && (pos3 == "c") && (pos4 == "k")) {
      tutSingle += "k";
      i += 3;
    }
    else if ((pos1 == "L") && (pos2 == "u") && (pos3 == "l")) {
      tutSingle += "L";
      i += 2;
    }
    else if ((pos1 == "l") && (pos2 == "u") && (pos3 == "l")) {
      tutSingle += "l";
      i += 2;
    }
    else if ((pos1 == "M") && (pos2 == "u") && (pos3 == "m")) {
      tutSingle += "M";
      i += 2;
    }
    else if ((pos1 == "m") && (pos2 == "u") && (pos3 == "m")) {
      tutSingle += "m";
      i += 2;
    }
    else if ((pos1 == "N") && (pos2 == "u") && (pos3 == "n")) {
      tutSingle += "N";
      i += 2;
    }
    else if ((pos1 == "n") && (pos2 == "u") && (pos3 == "n")) {
      tutSingle += "n";
      i += 2;
    }
    else if ((pos1 == "P") && (pos2 == "u") && (pos3 == "b")) {
      tutSingle += "P";
      i += 2;
    }
    else if ((pos1 == "p") && (pos2 == "u") && (pos3 == "b")) {
      tutSingle += "p";
      i += 2;
    }
    else if ((pos1 == "Q") && (pos2 == "u") && (pos3 == "a") && (pos4 == "c") && (pos5 == "k")) {
      tutSingle += "Q";
      i += 4;
    }
    else if ((pos1 == "q") && (pos2 == "u") && (pos3 == "a") && (pos4 == "c") && (pos5 == "k")) {
      tutSingle += "q";
      i += 4;
    }
    else if ((pos1 == "R") && (pos2 == "u") && (pos3 == "g")) {
      tutSingle += "R";
      i += 2;
    }
    else if ((pos1 == "r") && (pos2 == "u") && (pos3 == "g")) {
      tutSingle += "r";
      i += 2;
    }
    else if ((pos1 == "S") && (pos2 == "u") && (pos3 == "s")) {
      tutSingle += "S";
      i += 2;
    }
    else if ((pos1 == "s") && (pos2 == "u") && (pos3 == "s")) {
      tutSingle += "s";
      i += 2;
    }
    else if ((pos1 == "T") && (pos2 == "u") && (pos3 == "t")) {
      tutSingle += "T";
      i += 2;
    }
    else if ((pos1 == "t") && (pos2 == "u") && (pos3 == "t")) {
      tutSingle += "t";
      i += 2;
    }
    else if ((pos1 == "V") && (pos2 == "u") && (pos3 == "v")) {
      tutSingle += "V";
      i += 2;
    }
    else if ((pos1 == "v") && (pos2 == "u") && (pos3 == "v")) {
      tutSingle += "v";
      i += 2;
    }
    else if ((pos1 == "W") && (pos2 == "a") && (pos3 == "c") && (pos4 == "k")) {
      tutSingle += "W";
      i += 3;
    }
    else if ((pos1 == "w") && (pos2 == "a") && (pos3 == "c") && (pos4 == "k")) {
      tutSingle += "w";
      i += 3;
    }
    else if ((pos1 == "E") && (pos2 == "x")) {
      tutSingle += "X";
      i += 1;
    }
    else if ((pos1 == "e") && (pos2 == "x")) {
      tutSingle += "x";
      i += 1;
    }
    else if ((pos1 == "Y") && (pos2 == "u") && (pos3 == "b")) {
      tutSingle += "Y";
      i += 2;
    }
    else if ((pos1 == "y") && (pos2 == "u") && (pos3 == "b")) {
      tutSingle += "y";
      i += 2;
    }
    else if ((pos1 == "Z") && (pos2 == "u") && (pos3 == "b")) {
      tutSingle += "Z";
      i += 2;
    }
    else if ((pos1 == "z") && (pos2 == "u") && (pos3 == "b")) {
      tutSingle += "z";
      i += 2;
    }
    else {
      tutSingle += pos1;
    }
  }
  return tutSingle;
}

//translates a Tutnese phrase to its corresponding repeated English characters
std::string Model::translateTutDouble(std::string str2) {
  std::string tutDouble = "";
  // used for checking which letter is at each index
  std::string pos1 = "";
  std::string pos2 = "";
  std::string pos3 = "";
  std::string pos4 = "";
  std::string pos5 = "";
  std::string pos6 = "";
  std::string pos7 = "";

  for (int i = 0; i < str2.size(); ++i) {
    // used for checking which letter is at each index
    pos1 = str2[i];
    pos2 = str2[i+1];
    pos3 = str2[i+2];
    pos4 = str2[i+3];
    pos5 = str2[i+4];
    pos6 = str2[i+5];
    pos7 = str2[i+6];

    // accounting for upper and lowercase vowels first
    if ((pos1 == "S") && (pos2 == "q") && (pos3 == "u") && (pos4 == "a") && (pos5 == "t") && (pos6 == "a")) {
      tutDouble += "Aa";
      // skips the rest of the translated tut and moves on to the next character after it
      i += 5;
    }
    else if ((pos1 == "s") && (pos2 == "q") && (pos3 == "u") && (pos4 == "a") && (pos5 == "t") && (pos6 == "a")) {
      tutDouble += "aa";
      // skips the rest of the translated tut and moves on to the next character after it
      i += 5;
    }
    else if ((pos1 == "S") && (pos2 == "q") && (pos3 == "u") && (pos4 == "a") && (pos5 == "t") && (pos6 == "e") && !(pos7 == "x")) {
      tutDouble += "Ee";
      // skips the rest of the translated tut and moves on to the next character after it
      i += 5;
    }
    else if ((pos1 == "s") && (pos2 == "q") && (pos3 == "u") && (pos4 == "a") && (pos5 == "t") && (pos6 == "e") && !(pos7 == "x")) {
      tutDouble += "ee";
      // skips the rest of the translated tut and moves on to the next character after it
      i += 5;
    }
    else if ((pos1 == "S") && (pos2 == "q") && (pos3 == "u") && (pos4 == "a") && (pos5 == "t") && (pos6 == "i")) {
      tutDouble += "Ii";
      // skips the rest of the translated tut and moves on to the next character after it
      i += 5;
    }
    else if ((pos1 == "s") && (pos2 == "q") && (pos3 == "u") && (pos4 == "a") && (pos5 == "t") && (pos6 == "i")) {
      tutDouble += "ii";
      // skips the rest of the translated tut and moves on to the next character after it
      i += 5;
    }
    else if ((pos1 == "S") && (pos2 == "q") && (pos3 == "u") && (pos4 == "a") && (pos5 == "t") && (pos6 == "o")) {
      tutDouble += "Oo";
      // skips the rest of the translated tut and moves on to the next character after it
      i += 5;
    }
    else if ((pos1 == "s") && (pos2 == "q") && (pos3 == "u") && (pos4 == "a") && (pos5 == "t") && (pos6 == "o")) {
      tutDouble += "oo";
      // skips the rest of the translated tut and moves on to the next character after it
      i += 5;
    }
    else if ((pos1 == "S") && (pos2 == "q") && (pos3 == "u") && (pos4 == "a") && (pos5 == "t") && (pos6 == "u")) {
      tutDouble += "Uu";
      // skips the rest of the translated tut and moves on to the next character after it
      i += 5;
    }
    else if ((pos1 == "s") && (pos2 == "q") && (pos3 == "u") && (pos4 == "a") && (pos5 == "t") && (pos6 == "u")) {
      tutDouble += "uu";
      // skips the rest of the translated tut and moves on to the next character after it
      i += 5;
    }
    // begin accounting for lower and uppercase consonants
    else if ((pos1 == "S") && (pos2 == "q") && (pos3 == "u") && (pos4 == "a") && (pos5 == "b")) {
      tutDouble += "Bb";
      // skips the rest of the translated tut and moves on to the next character after it
      i += 4;
    }
    else if ((pos1 == "s") && (pos2 == "q") && (pos3 == "u") && (pos4 == "a") && (pos5 == "b")) {
      tutDouble += "bb";
      // skips the rest of the translated tut and moves on to the next character after it
      i += 4;
    }
    else if ((pos1 == "S") && (pos2 == "q") && (pos3 == "u") && (pos4 == "a") && (pos5 == "c")) {
      tutDouble += "Cc";
      // skips the rest of the translated tut and moves on to the next character after it
      i += 4;
    }
    else if ((pos1 == "s") && (pos2 == "q") && (pos3 == "u") && (pos4 == "a") && (pos5 == "c")) {
      tutDouble += "cc";
      // skips the rest of the translated tut and moves on to the next character after it
      i += 4;
    }
    else if ((pos1 == "S") && (pos2 == "q") && (pos3 == "u") && (pos4 == "a") && (pos5 == "d")) {
      tutDouble += "Dd";
      // skips the rest of the translated tut and moves on to the next character after it
      i += 4;
    }
    else if ((pos1 == "s") && (pos2 == "q") && (pos3 == "u") && (pos4 == "a") && (pos5 == "d")) {
      tutDouble += "dd";
      // skips the rest of the translated tut and moves on to the next character after it
      i += 4;
    }
    else if ((pos1 == "S") && (pos2 == "q") && (pos3 == "u") && (pos4 == "a") && (pos5 == "f")) {
      tutDouble += "Ff";
      // skips the rest of the translated tut and moves on to the next character after it
      i += 4;
    }
    else if ((pos1 == "s") && (pos2 == "q") && (pos3 == "u") && (pos4 == "a") && (pos5 == "f")) {
      tutDouble += "ff";
      // skips the rest of the translated tut and moves on to the next character after it
      i += 4;
    }
    else if ((pos1 == "S") && (pos2 == "q") && (pos3 == "u") && (pos4 == "a") && (pos5 == "g")) {
      tutDouble += "Gg";
      // skips the rest of the translated tut and moves on to the next character after it
      i += 4;
    }
    else if ((pos1 == "s") && (pos2 == "q") && (pos3 == "u") && (pos4 == "a") && (pos5 == "g")) {
      tutDouble += "gg";
      // skips the rest of the translated tut and moves on to the next character after it
      i += 4;
    }
    else if ((pos1 == "S") && (pos2 == "q") && (pos3 == "u") && (pos4 == "a") && (pos5 == "h")) {
      tutDouble += "Hh";
      // skips the rest of the translated tut and moves on to the next character after it
      i += 4;
    }
    else if ((pos1 == "s") && (pos2 == "q") && (pos3 == "u") && (pos4 == "a") && (pos5 == "h")) {
      tutDouble += "hh";
      // skips the rest of the translated tut and moves on to the next character after it
      i += 4;
    }
    else if ((pos1 == "S") && (pos2 == "q") && (pos3 == "u") && (pos4 == "a") && (pos5 == "j")) {
      tutDouble += "Jj";
      // skips the rest of the translated tut and moves on to the next character after it
      i += 4;
    }
    else if ((pos1 == "s") && (pos2 == "q") && (pos3 == "u") && (pos4 == "a") && (pos5 == "j")) {
      tutDouble += "jj";
      // skips the rest of the translated tut and moves on to the next character after it
      i += 4;
    }
    else if ((pos1 == "S") && (pos2 == "q") && (pos3 == "u") && (pos4 == "a") && (pos5 == "k")) {
      tutDouble += "Kk";
      // skips the rest of the translated tut and moves on to the next character after it
      i += 4;
    }
    else if ((pos1 == "s") && (pos2 == "q") && (pos3 == "u") && (pos4 == "a") && (pos5 == "k")) {
      tutDouble += "kk";
      // skips the rest of the translated tut and moves on to the next character after it
      i += 4;
    }
    else if ((pos1 == "S") && (pos2 == "q") && (pos3 == "u") && (pos4 == "a") && (pos5 == "l")) {
      tutDouble += "Ll";
      // skips the rest of the translated tut and moves on to the next character after it
      i += 4;
    }
    else if ((pos1 == "s") && (pos2 == "q") && (pos3 == "u") && (pos4 == "a") && (pos5 == "l")) {
      tutDouble += "ll";
      // skips the rest of the translated tut and moves on to the next character after it
      i += 4;
    }
    else if ((pos1 == "S") && (pos2 == "q") && (pos3 == "u") && (pos4 == "a") && (pos5 == "m")) {
      tutDouble += "Mm";
      // skips the rest of the translated tut and moves on to the next character after it
      i += 4;
    }
    else if ((pos1 == "s") && (pos2 == "q") && (pos3 == "u") && (pos4 == "a") && (pos5 == "m")) {
      tutDouble += "mm";
      // skips the rest of the translated tut and moves on to the next character after it
      i += 4;
    }
    else if ((pos1 == "S") && (pos2 == "q") && (pos3 == "u") && (pos4 == "a") && (pos5 == "n")) {
      tutDouble += "Nn";
      // skips the rest of the translated tut and moves on to the next character after it
      i += 4;
    }
    else if ((pos1 == "s") && (pos2 == "q") && (pos3 == "u") && (pos4 == "a") && (pos5 == "n")) {
      tutDouble += "nn";
      // skips the rest of the translated tut and moves on to the next character after it
      i += 4;
    }
    else if ((pos1 == "S") && (pos2 == "q") && (pos3 == "u") && (pos4 == "a") && (pos5 == "p")) {
      tutDouble += "Pp";
      // skips the rest of the translated tut and moves on to the next character after it
      i += 4;
    }
    else if ((pos1 == "s") && (pos2 == "q") && (pos3 == "u") && (pos4 == "a") && (pos5 == "p")) {
      tutDouble += "pp";
      // skips the rest of the translated tut and moves on to the next character after it
      i += 4;
    }
    else if ((pos1 == "S") && (pos2 == "q") && (pos3 == "u") && (pos4 == "a") && (pos5 == "q")) {
      tutDouble += "Qq";
      // skips the rest of the translated tut and moves on to the next character after it
      i += 4;
    }
    else if ((pos1 == "s") && (pos2 == "q") && (pos3 == "u") && (pos4 == "a") && (pos5 == "q")) {
      tutDouble += "qq";
      // skips the rest of the translated tut and moves on to the next character after it
      i += 4;
    }
    else if ((pos1 == "S") && (pos2 == "q") && (pos3 == "u") && (pos4 == "a") && (pos5 == "r")) {
      tutDouble += "Rr";
      // skips the rest of the translated tut and moves on to the next character after it
      i += 4;
    }
    else if ((pos1 == "s") && (pos2 == "q") && (pos3 == "u") && (pos4 == "a") && (pos5 == "r")) {
      tutDouble += "rr";
      // skips the rest of the translated tut and moves on to the next character after it
      i += 4;
    }
    else if ((pos1 == "S") && (pos2 == "q") && (pos3 == "u") && (pos4 == "a") && (pos5 == "s")) {
      tutDouble += "Ss";
      // skips the rest of the translated tut and moves on to the next character after it
      i += 4;
    }
    else if ((pos1 == "s") && (pos2 == "q") && (pos3 == "u") && (pos4 == "a") && (pos5 == "s")) {
      tutDouble += "ss";
      // skips the rest of the translated tut and moves on to the next character after it
      i += 4;
    }
    else if ((pos1 == "S") && (pos2 == "q") && (pos3 == "u") && (pos4 == "a") && (pos5 == "t")) {
      tutDouble += "Tt";
      // skips the rest of the translated tut and moves on to the next character after it
      i += 4;
    }
    else if ((pos1 == "s") && (pos2 == "q") && (pos3 == "u") && (pos4 == "a") && (pos5 == "t")) {
      tutDouble += "tt";
      // skips the rest of the translated tut and moves on to the next character after it
      i += 4;
    }
    else if ((pos1 == "S") && (pos2 == "q") && (pos3 == "u") && (pos4 == "a") && (pos5 == "v")) {
      tutDouble += "Vv";
      // skips the rest of the translated tut and moves on to the next character after it
      i += 4;
    }
    else if ((pos1 == "s") && (pos2 == "q") && (pos3 == "u") && (pos4 == "a") && (pos5 == "v")) {
      tutDouble += "vv";
      // skips the rest of the translated tut and moves on to the next character after it
      i += 4;
    }
    else if ((pos1 == "S") && (pos2 == "q") && (pos3 == "u") && (pos4 == "a") && (pos5 == "w")) {
      tutDouble += "Ww";
      // skips the rest of the translated tut and moves on to the next character after it
      i += 4;
    }
    else if ((pos1 == "s") && (pos2 == "q") && (pos3 == "u") && (pos4 == "a") && (pos5 == "w")) {
      tutDouble += "ww";
      // skips the rest of the translated tut and moves on to the next character after it
      i += 4;
    }
    else if ((pos1 == "S") && (pos2 == "q") && (pos3 == "u") && (pos4 == "a") && (pos5 == "x")) {
      tutDouble += "Xx";
      // skips the rest of the translated tut and moves on to the next character after it
      i += 4;
    }
    else if ((pos1 == "s") && (pos2 == "q") && (pos3 == "u") && (pos4 == "a") && (pos5 == "x")) {
      tutDouble += "xx";
      // skips the rest of the translated tut and moves on to the next character after it
      i += 4;
    }
    else if ((pos1 == "S") && (pos2 == "q") && (pos3 == "u") && (pos4 == "a") && (pos5 == "y")) {
      tutDouble += "Yy";
      // skips the rest of the translated tut and moves on to the next character after it
      i += 4;
    }
    else if ((pos1 == "s") && (pos2 == "q") && (pos3 == "u") && (pos4 == "a") && (pos5 == "y")) {
      tutDouble += "yy";
      // skips the rest of the translated tut and moves on to the next character after it
      i += 4;
    }
    else if ((pos1 == "S") && (pos2 == "q") && (pos3 == "u") && (pos4 == "a") && (pos5 == "z")) {
      tutDouble += "Zz";
      // skips the rest of the translated tut and moves on to the next character after it
      i += 4;
    }
    else if ((pos1 == "s") && (pos2 == "q") && (pos3 == "u") && (pos4 == "a") && (pos5 == "z")) {
      tutDouble += "zz";
      // skips the rest of the translated tut and moves on to the next character after it
      i += 4;
    }
    else {
      // accounts for spaces, punctuation, etc. - anything not translated between Tutnese and English
      tutDouble += translateTutSingle(pos1);
    }
  }
  return tutDouble;
}
