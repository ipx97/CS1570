/*
Programmer: Ian Piskulic      Date: 4/17/2015
File: res.h                 Section: B
Purpose: To find a match of DNA from the samples with the
dead cow.
*/

#include <iostream>
#include <cstdlib> 
#include <ctime>
#include <cstring>
#include <fstream>

using namespace std;

#ifndef RES_H
#define RES_H

//Class
class resident{
  public:
    string m_name;
    bool m_isAlive,m_isMurderer;
    int m_hair;
  //public:
    resident();
    void hair_color_change(int newHair);
    void kill_me();
    friend ostream &operator << (ostream &out, resident &res);
};

#endif
