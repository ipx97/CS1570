/*
Programmer: Ian Piskulic
Section: D
Date: 2/11/15
File: lab4.cpp
Description: To average as many numbers as you want
*/

#include <iostream>

using namespace std;

float mean;
int num;
int total;
int count;
char decision;

int main(){
  cout<<"Welcome to THE AVERAGE CALCULATOR!\n";
  
  //Asks if you want to start the program
  cout<<"Would you like to enter a number (y/n):";
  cin>>decision;
  if(decision=='y'){
    //Keeps running the program until you input n
    do{
      //Checks if the number is a valid input
      do{
        cout<<"Enter a number divisible by 5 or 3 and between 0-50:";
        cin>>num;
      }while(((num%5!=0)&&(num%3!=0))||(num<0)||(num>50));
      total+=num; //The sum of the numbers
      count++; //Indicates the amount of numbers typed in
      cout<<"\nWould you like to enter a number (y/n):";
      cin>>decision;
    }while(decision=='y');
    
    //Once n is typed in, the average is displayed
    mean=(static_cast<float>(total)/count);
    cout<<endl<<"The average is: "<<mean<<endl;
  }
  
  //If the user says n on the first question, it displays zero
  else if(decision=='n'){
    cout<<"The average is: 0";
  }
}
