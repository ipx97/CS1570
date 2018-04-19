/*
Programmer: Ian Piskulic
Section: D
File: lab9i.cpp
Purpose: To see if a random number is divisible by 2,3,4,5, and 6
*/

#include "lab9.h"

void greet(){
  cout<<"~~~Welcome to the DIVISIBILITY TESTER!~~~\n\n";
  return;
}
  
void printNumber(const int randArray[]){
  cout<<"The generated number is ";
  for(int i=0; i<SIZE; i++){
    cout<<randArray[i];
  }
  cout<<endl<<endl;
  return;
}

bool divisibleBy2(const int randArray[]){
  if ((randArray[4]%2) == 0){
    return true;
  }
  else
    return false;
}

bool divisibleBy3(const int randArray[]){
  int sum = 0;
  for(int i; i<SIZE; i++){
    sum += randArray[i];
  }
  if ((sum % 3)== 0){
    return true;
  }
  else{
    return false;
  }
}

bool divisibleBy4(const int randArray[]){
  int sum;
  sum = (randArray[3] * 10) + randArray[4];
  if ((sum % 4) == 0){
    return true;
  }
  else{
    return false;
  }
}

bool divisibleBy5(const int randArray[]){
  if ((randArray[4] == 0) || (randArray[4] == 5)){
    return true;
  }
  else{
    return false;
  }
}

bool divisibleBy6(const int randArray[]){
  if (divisibleBy2(randArray) && divisibleBy3(randArray)){
    return true;
  }
  else{
    return false;
  }
}

void printResult(int& divis, const bool result){
  if (result == false){
    cout<<"Not";
  }
  cout<<" Divisible by "<<divis<<endl;
  divis++;
  return;
}

void signoff(){
  cout<<"\n\nHave a nice day!!!";
}
