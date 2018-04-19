/*
Programmer: Ian Piskulic      Date: 3/8/2015
File: hw6.cpp                 Section: B
Purpose: To find the wavelength needed to make certain
substances stand out and easily visable (using functions)
*/

#include <iostream>

using namespace std;

//Function Prototypes

//Description: Greets the user at the start of the program.
//Pre: none
//Post: Prints a welcome message to the console
void greeting();
//Description: Shows the menu and takes in the users decision
//Pre: none
//Post: Prints menu to the console and returns the menu option choice
char present_menu();
//Description: Takes in the hair index and gives the wavelength to see
//that type of hair.
//Pre: Index is positive
//Post: Returns the calculated int value for wavelength
int hair(const float index);
int hair(const int index);
//Description: Determines the hair index for the hair color given
//Pre: none
//Post: Returns the float for that hair type
float hair_index();
//Description: Determines wavelength from hair index and saliva
//Pre: n is in the range 1-7 for precision and index is positive
//Post: Returns the calculated int value for wavelength
int saliva_hair(const int n,const float index);
int saliva_hair(const int n,const int index);
//Description: Calculates wavelength for soup, saliva, and hair
//Pre: n is in the range 1-7 and soup is a yes or no
//Post: Returns the calculated int value for wavelength
int soup_saliva_hair(const char soup,const int n);
//Description: Determines wavelength from the green goo's grade and the
//height of the alien
//Pre: Grade of goo is in the range 0-6 and height is either 1,2, or 3ft
//Post: Returns the calculated int value for wavelength
int green_goo(const char grade,const int height);
//Description: Displays a goodbye message to the user
//Pre: none
//Post: Prints out a signoff message to the console
void signoff();
