/*
Programmer: Ian Piskulic      Date: 4/25/2015
File: judicial.h                 Section: B
Purpose: Creates a judge
*/

#include <iostream>
#include "res.h"

using namespace std;

#ifndef JUDICIAL_H
#define JUDICIAL_H

class Judicial{
    string m_name;
    int m_convRate;
  public:
    //default constructor
    Judicial(const string name, const short rate) : 
      m_name(name), m_convRate(rate){}
    //Description:
    //Pre:
    //Post:
    void judgement(Resident & murderer) const;
    //Description:
    //Pre:
    //Post:
    void kill(Resident & killer) const;
};

//Constants
const int MAX = 100;

#endif
