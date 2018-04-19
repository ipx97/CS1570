/*
Programmer: Ian Piskulic      Date: 4/17/2015
File: room.h                 Section: B
Purpose: To see if there was a murder and who were
the people that were involved
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
class Crime_room{
    bool m_murderCommitted;
    int m_hair;
    string m_deadGuy;
  public:
    //Description:the default constructer for crime_room
    //Pre:none
    //Post:sets values to the members of the object
    Crime_room();
    //Description:solves the murder if there is one
    //Pre:two different resident objects
    //Post:finds out what is in the room and who committed the crime
    void meeting(Resident & a,Resident & b);
    //Description:determines if there was a murder
    //Pre:none
    //Post:shows if there was a murder or not
    bool murder();
    //Description:prints who was murdered
    //Pre:none
    //Post:tells the user who was murdered
    void check_room();
};

#endif
