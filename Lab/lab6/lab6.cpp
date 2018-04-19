/*
Programmer: Ian Piskulic
Section: D
Date: 2/25/15
File: lab6.cpp
Description: 
*/

#include <iostream>
using namespace std;

void greet();
float readNumber();
float arithmeticMean(float number1, float number2, float number3);
float harmonicMean(float number1, float number2, float number3);
void printResult(float harmonic, float arithmetic);
void signoff();

int main(){

  float number1;
  float number2;
  float number3;
  float arithmetic;
  float harmonic;
  
  number1=readNumber();
  number2=readNumber();
  number3=readNumber();
  
  arithmetic=arithmeticMean(number1, number2, number3);
  harmonic=harmonicMean(number1, number2, number3);
  
  printResult(harmonic, arithmetic);
  signoff();
  
  return 0;
}

//Greeting message
void greet(){
  cout<<"Welcome to the Arithmatic/Harmonic Mean Calculator!";
  return;
}

//Get user input and check to make sure it is positive
float readNumber(){
  float num;
  cout<<"Please enter a positive number:";
  cin>>num;
  while(num<=0){
    cout<<"Invalid number! Try again\n\n";
    cout<<"Please enter a positive number:";
    cin>>num;
  }
  return num;
}

//Calculate and return the arithmetic mean of the three numbers
float arithmeticMean(float number1, float number2, float number3){
  float numTotal=(number1+number2+number3);
  return (numTotal/3);
}

//Calculate and return the harmonic mean of the three numbers
float harmonicMean(float number1, float number2, float number3){
  float numTotal=((1/number1)+(1/number2)+(1/number3));
  return (3/numTotal);
}

//Prints results on screen
void printResult(float harmonic, float arithmetic){
  cout<<"\nThe arithmetic mean is:"<<arithmetic<<endl;
  cout<<"The harmonic mean is:"<<harmonic<<endl;
  return;
}

//Sign off
void signoff(){
  cout<<"\nHave a nice day!\n";
  return;
}
  
