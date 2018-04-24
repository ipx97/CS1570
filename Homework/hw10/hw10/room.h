/*
Programmer: Ian Piskulic      Date: 4/25/2015
File: room.h                 Section: B
Purpose: To create the crime room of the murder
*/

#include <iostream>
#include <cstdlib> 
#include <ctime>
#include <cstring>
#include <fstream>
#include "res.h"

using namespace std;

#ifndef ROOM_H
#define ROOM_H

//Class
class CrimeRoom{
    bool m_murderCommitted;
    forensic_data m_dropData;
    string m_deadGuy;
  public:
    //default constructor
    CrimeRoom();
    //Description:creates meetings between residents
    //Pre: two random residents
    //Post: outputs what the outcome was
    void meeting(Resident & a,Resident & b);
    //Description: determines if a murder happens
    //Pre: none
    //Post: true or false of murder
    bool murder();
    //Description: checks room for dead person
    //Pre: two residents
    //Post: outputs who was found dead and if a murder occured
    bool check_room(const Resident a,const Resident b);
    //Description: 
    //Pre:
    //Post:
    forensic_data getEvidence() const {return m_dropData;}
    //Description:
    //Pre:
    //Post:
    void reset();
};

#endif
