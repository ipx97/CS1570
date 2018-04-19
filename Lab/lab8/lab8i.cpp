/*
Programmer: Ian Piskulic
Section: D
File: lab8i.cpp
Purpose: The functions to find the area of three shapes
*/


#include "lab8.h"


void greet(){
  cout<<"~~~~~Welcome to the Area Calculator~~~~~";
  return;
}

void read(float &num1, float &num2){
  cin>>num1;
  cin>>num2;
  return;
}

float urea(const rectangle &rect){
  float area=rect.m_length * rect.m_width;//length * width
  return area;
}

void signoff(){
  cout<<"Have a good day!";
  return;
}
