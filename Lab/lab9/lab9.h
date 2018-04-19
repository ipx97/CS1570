/*
Programmer: Ian Piskulic
Section: D
File: lab9.h
Purpose: To see if a random number is divisible by 2,3,4,5, and 6
*/

#ifndef LAB9_H
#define LAB9_H


#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


//Function Prototypes

//Pre: none
//Post: outputs a greeting message to the console
//Description: Sends a greeting message to the user
void greet();
//Pre: inputs a randomly generated 5 digit array
//Post: outputs the number in the array
//Description: Shows the number in the area
void printNumber(const int randArray[]);
//Pre: inputs a randomly generated 5 digit array
//Post: outputs a true or false
//Description: determines if the number is divisible by 2
bool divisibleBy2(const int randArray[]);
//Pre: inputs a randomly generated 5 digit array
//Post: outputs a true or false
//Description: determines if the number is divisible by 3 
bool divisibleBy3(const int randArray[]);
//Pre: inputs a randomly generated 5 digit array
//Post: outputs a true or false
//Description: determines if the number is divisible by 4 
bool divisibleBy4(const int randArray[]);
//Pre: inputs a randomly generated 5 digit array
//Post: outputs a true or false
//Description: determines if the number is divisible by 5 
bool divisibleBy5(const int randArray[]);
//Pre: inputs a randomly generated 5 digit array
//Post: outputs a true or false
//Description: determines if the number is divisible by 6
bool divisibleBy6(const int randArray[]);
//Pre: inputs the divisor and the result of a divisible test function
//Post: outputs the results of a divisibility function
//Description: shows if the number was divisible or not by a certain number
void printResult(int& divis, const bool result);
//Pre: none
//Post: outputs a signoff message
//Description: prints a signoff message to the user
void signoff();

//Global Constants
const int SIZE = 5;

#endif
