/*
Programmer: Ian Piskulic     Student ID: 12431632
Section: B                   Date: 2/3/15
File: hw2.cpp                Class: CS1570
Description: To find where a spatter of green goo originated from.
*/

#include <iostream>
#include <cmath>
using namespace std;

  int height;
  int width;
  int length;
  float gamma2;
  float angleA;
  float angleB;
  float vX;
  float vY;

int main()
{
  //Greets the user then prompts for height, width, length, and angle
  cout<<"Hello! You are currently running the GGPA program.\n\n";
  cout<<"Please enter the height from the spatter to the floor (inches):";
  cin>>height;
  cout<<"\nEnter the width of the spatter (inches):";
  cin>>width;
  cout<<"\nEnter the length of the spatter (inches):";
  cin>>length;
  cout<<"\nEnter the angle gamma of the spatter (radians):";
  cin>>gamma2;
  
  //Finds angleA then angleB
  angleA=asin(static_cast<float>(width)/length);
  angleB=atan((tan(angleA))/(sin(gamma2)));
  
  //Plugs angleA and angleB in to find vY and vX components
  vY=(height)*(tan(angleA));
  vX=(vY)*(tan(angleB));
  
  //Displays results to the user and signs off
  cout<<endl<<"You have input:\nheight = "<<height<<"\nwidth = "
  <<width<<"\nlength = "<<length<<"\ngamma = "<<gamma2<<
  "\n\nThe origin coordinates are x = "<<vX<<" and y = "<<vY<<endl;
  cout<<"\nGGPA calculations complete! Goodbye.\n";
  return 0;
}
