/*
Programmer: Ian Piskulic
Section: D
File: lab7.cpp
Purpose: To generate five random numbers between
an upper and lower bound set by the user
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void greet();
//Description: Displays a greeting message to the user
//Pre: none
//Post: Prints a welcome message to the console
void readNumbers(int & number1, int & number2);
//Description: Reads the two numbers from the user
//Pre: The two numbers have to be greater than 0 and the second
//number has to be at least two times greater than the first
//Post: Gives back the two limits
void randomGenerator(int num1, int num2);
//Description: Generates and prints five random numbers
//Pre: Two positive integers
//Post: Prints five random numbers within the range
void signoff();
//Description: Gives a signoff message to the user
//Pre: none
//Post: Prints a signoff message to the console


int main(){
  
  //Main Variables
  int num1;
  int num2;
  
  //Function Calls
  greet();
  readNumbers(num1, num2);
  randomGenerator(num1, num2);
  signoff();
  return 0;
}


//Function Definitions

//Greets the user
void greet(){
  cout<<"Welcome to the Random Number Generator!\n\n";
  return;
}

//Reads the user inputs
void readNumbers(int & number1, int & number2){
  //Asks for a positive number
  do{
    cout<<"Enter the lower limit(>0):";
    cin>>number1;
  }while(number1<=0);
  cout<<endl;
  //Asks for a number at least 2 times the first one
  do{
    cout<<"Enter the upper limit(>"<<number1<<"):";
    cin>>number2;
  }while(number2<(number1*2));
  cout<<endl;
  return;
}

void randomGenerator(int num1, int num2){
  srand(time(NULL));
  //Prints 5 different random numbers within the range
  for(int i=1;i<=5;i++){
    cout<<i<<". Random number between "<<num1<<" and "<<num2;
    cout<<", inclusively, is:"<<rand() % (num2 - num1 + 1) + num1;
    cout<<endl;
  }
  return;
}

//Prints a goodbye message
void signoff(){
  cout<<"\nGoodbye!\n";
  return;
}
