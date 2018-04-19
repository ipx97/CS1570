/*
Programmer: Ian Piskulic
Section: D
File: lab3.cpp
Description: BMI Calculator
*/

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int MASS;
  int FACTOR=703;
  int HEIGHT;
  float bmi;
 
  cout<<"Enter your mass (pounds):";
  cin>>MASS; //Gets the mass from the user
  cout<<endl<<"Enter your height (inches):";
  cin>>HEIGHT; //Gets the height from the user
  bmi=(static_cast<float>(MASS)*(FACTOR))/(pow(HEIGHT,2)); //Calculates the bmi
  cout<<endl<<"Your BMI for "<<HEIGHT<<" inches and "<<MASS<<" pounds is "<<bmi<<endl; 
  return 0;
}
