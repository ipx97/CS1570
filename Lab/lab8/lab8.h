/*
Programmer: Ian Piskulic
Section: D
File: lab8.h
Purpose: To calculate the area of a triangle, diamond, and shape
*/

#ifndef LAB8_H
#define LAB8_H



#include <iostream>

using namespace std;

//Struct Definitions
struct triangle{
  float m_base;
  float m_height;
};
struct diamond{
  float m_base;
  float m_height;
};
struct rectangle{
  float m_length;
  float m_width;
};

//Templates
template<typename T>
float area(T &shape){
  //Base times height divided by 2
  float area=(shape.m_base * shape.m_height)/2;
  
  return area;
}

//Function Prototypes
//Pre: none
//Post: outputs a greeting message to the console
//Description: Sends a greeting message to the user
void greet();
//Pre: num1 and num2 will later become base and height
//Post: assigns num1 and 2 as the inputs
//Description: assigns the inputs to the variables
void read(float & num1, float & num2);
//Pre: puts in the rectangle struct
//Post: finds the area of the rectangle
//Description: calculates the area of the rectangle
float urea(const rectangle &rect);
//Pre: none
//Post: sends a goodbye message to the user
//Description: outputs a signoff message to the console
void signoff();

#endif
