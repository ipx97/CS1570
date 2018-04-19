/*
Programmer: Ian Piskulic      Date: 4/1/2015
File: hw8.h                 Section: B
Purpose: To find a match of DNA from the samples with the
dead cow.
*/


#include <iostream>
#include <cstdlib> 
#include <ctime>
#include <cstring>

using namespace std;

#ifndef HW8_H
#define HW8_H

//Prototypes

//Description: Greets the user at the start of the program.
//Pre: none
//Post: Prints a welcome message to the console
void greeting();
//Description: assigns 128 random values of a,t,c, and g's
//Pre: takes in a character array
//Post: assigns values to that array
void createSample(char arr[]);
//Description: assigns 16 random values of a,t,c,-, and g's
//Pre: takes in a character array
//Post: assigns values to that array
void createDead(char arr[]);
//Description: compares two arrays step by step for a match
//Pre: takes in two arrays to be compaired
//Post: outputs whether or not there was a match in the larger one
bool findMatch(char sample[], char dead[]);
//Description: Prints a character array
//Pre: takes in a character array and its size
//Post: outputs the values in the character array
void printArray(char arr[], int SIZE);
//Description: assigns 32 random values of n,w,a,l, and g's
//Pre: takes in a character array
//Post: assigns values to that array
void createDental(char arr[]);
//Description: Displays a goodbye message to the user
//Pre: none
//Post: Prints out a signoff message to the console
void signoff();

//Global Constants

const int SIZED = 17;
const int SIZES = 129;
const int SIZET = 33;

#endif
