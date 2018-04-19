/*
Programmer: Ian Piskulic      Date: 4/17/2015
File: res.h                 Section: B
Purpose: To see if there was a murder and who were
the people that were involved
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
class Resident{
  public:
    string m_name;
    bool m_isAlive,m_isMurderer;
    int m_hair;
    //Description:the default constructer for crime_room
    //Pre:none
    //Post:sets values to the members of the object
    Resident();
    //Description:changes the hair color of the resident
    //Pre:new hair color
    //Post:sets a new value to the hair member
    void hair_color_change(int newHair);
    //Description:sets an objects isAlive member to false
    //Pre:none
    //Post:makes the resident dead based on the isAlive member
    void kill_me();
    //Description:creates a new operator for printing resident info
    //Pre:ostream and a resident
    //Post:outputs the info of the resident
    friend ostream &operator << (ostream &out, Resident &res);
};

//Prototype

//Description:welcomes the user to the program
//Pre:none
//Post:prints a greeting message to the console
void greeting();
//Description:signs the user off
//Pre:none
//Post:prints a signoff message to the console
void signoff();

#endif
