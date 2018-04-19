/*
Programmer: Ian Piskulic
Section: D
File: lab12.h
Description: This program takes a time and outputs the next and
previous times
*/
 
#ifndef LAB12_H
#define LAB12_H 
 
#include <iostream>

using namespace std;

//Class definition
class Time{
  public:
    int hour, minute, second;
    //Description: gets the time from the user
    //Pre: none
    //Post: Gets the time from the user
    void read_in();
    //Description: prints the time to the console
    //Pre: three integers
    //Post: prints the time given
    void print_out(int,int,int);
    //Description: calculates the next time
    //Pre: none
    //Post: displays the time right after the one given
    void nextSecond();
    //Description: calculates the previous time
    //Pre: none
    //Post: displays the time right before the one given
    void previousSecond();
};

#endif
