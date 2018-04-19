/*
Programmer: Ian Piskulic      Date: 4/26/2015
File: forensics.h                 Section: B
Purpose: Declare the finger print and forensic data
variables
*/

using namespace std;

#ifndef FORENSICS_H
#define FORENSICS_H

//Constants
const int ARRAY_LENGTH = 8;
const int DNA_SIZE = 128;
const int SIZE2D = 8;
const short FINGER_MAX = 5;
const short STARS = 40;
const short  HAIR_MAX = 10;
const short  HAIR_MIN = 1;
const short STAR_NUM = 40;
const char STAR = '*';
const char SPACE = ' ';

//Structs
struct finger_print{
  char m_array [SIZE2D][SIZE2D];
  int m_loops;
  int m_arches;
  int m_whirls;
};

struct forensic_data{
  int m_hairColor;
  char m_dna[DNA_SIZE];
  finger_print m_print;
  forensic_data & operator = (const forensic_data & rhs);
};


#endif