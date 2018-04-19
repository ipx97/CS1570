/*
Programmer: Ian Piskulic      Date: 3/18/2015
File: hw7.h                 Section: B
Purpose: To match the bullet information with a gun.
*/


#include <iostream>
#include <cstdlib> 
#include <ctime>

using namespace std;

#ifndef HW7_H
#define HW7_H

//Structs
struct bullet{
  float m_caliber;
  short m_grooves;
  float m_widthOfL;
  float m_widthOfG;
  bool m_marks;
  string m_owner;
};

//Prototypes

//Description: Greets the user at the start of the program.
//Pre: none
//Post: Prints a welcome message to the console
void greeting();
//Description: Creates the database of bullets
//Pre: Takes in the array for the database and that array's size
//Post: Returns an array with 25 bullet entries in it
void database(bullet data[],const int SIZE);
//Description: Displays the library of bullets
//Pre: Takes in the library of bullets and the size of that library
//Post: Displays the library in order by caliber size
void outputData(const bullet data[],const int SIZE);
//Description: Gets the users input on the bullet's description
//Pre: Takes the struct of the bullet input
//Post: Sends back a completed struct
void getBullet(bullet& gunIn);
//Description: Prints the results of the search
//Pre: Sends the bullet described, the result of the search,
//and the suspect's name
//Post: Outputs if the search was conclusive or not and who did it
void results(const bullet gunIn,const bool match,const string matchName);
//Description: Displays a goodbye message to the user
//Pre: none
//Post: Prints out a signoff message to the console
void signoff();

//Global Constants
const int SIZE = 25;
const float CALIBER22 = 0.22;
const float CALIBER38 = 0.38;
const float CALIBER50 = 0.5;
const float GLMAX = 0.030;
const float GLMIN = 0.025;
#endif
