// Ian Piskulic  
// D  01/28/2015
// lab2  fix the errors to multiply two numbers

//including the I/O stream library
#include <iostream>
using namespace std;

int main()
{

  int multiplicand; // a within formula c = a * b
  int multiplier;  // b within formula c = a * b
  int product; // c within formula c = a * b
  
  // welcome message
  cout <<"Welcome to CS1580"<< endl << endl;
  cout <<"Let's Do some Multiplication!"<< endl << endl;
  
  // read multiplicand from keyboard
  cout <<"Enter the multiplicand:"<< endl;
  cin >> multiplicand;
  
  // read multiplier from keyboard
  cout <<"Enter the multiplier: "<< endl;
  cin >> multiplier;
  
  // perform multiplication as * operator
  product = multiplicand * multiplier;
  
  // display the result
  cout << multiplicand << " * " << multiplier << " = " << product << endl; 
  
  return 0;
  
}
