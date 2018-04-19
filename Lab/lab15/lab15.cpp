/*
Programmer: Ian Piskulic
Section: D
File: lab15.cpp
Purpose: Determines if the number is an 
armstrong number or not
*/

#include <iostream>
#include <cmath>
using namespace std;


int main(){

  //Main Variables
  int n;
  int num;
  int sum = 0;
  int pwr = 3;
  char repeatVal;
  bool repeat = false;
  
  do{
    try{
      cout << "Please enter an integer value:";
      cin >> n;
      num = n;
      
      //Checks if the cin is an int
      if(!cin.good())
        throw num;
      
      cin.clear();
      cin.ignore(10000,'\n');
      
      //Calculates the sum for the integer
      while(n != 0){
        int x = n % 10;
        sum += pow(x,pwr);
        n = n/10;
      }
      
      //Compares the suum to the entered number
      if(num == sum)
        cout << "\nThe number " << num << " is an armstrong number\n";
      else
        cout << "\nThe number " << num << " is not an armstrong number\n";
      
      repeat = false;
    }
  
    catch(int e){
      cout << "INVALID INPUT!\n\n";
      
      //Asks if the user wants to try again
      cout << "Would you like to enter a valid input?(y,n):";
      cin.clear();
      cin.ignore(10000,'\n');
      cin >>  repeatVal;
      
        if(repeatVal = 'y')
          repeat = true;
        else if(repeatVal == 'n')
          repeat = false;
        
    }
  }while(repeat);
  
  return 0;
}
