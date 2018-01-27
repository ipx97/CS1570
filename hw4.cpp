/*
Programmer: Ian Piskulic      Date: 2/17/2015
File: hw4.cpp                 Section: B
Purpose: To find the wavelength needed to make certain
substances stand out and easily visable
*/

#include <iostream>

using namespace std;

int menu;
int n;
float sumForN;//For saliva and hair
float sumForN2;//For saliva, hair, and soup
float calcW;//The calculated wavelength in option 2 and 3
int denomTotal=1;
int gooW=200;
int exit;
char grade;
int const HAIRW=400;

int main(){
  cout<<"Welcome to the CRIME-O-LIGHT 400!";
  do{
  
    //Displays the menu and asks for a choice
    cout<<"\n\n~~~CRIME-O-LIGHT~~~\n\n1. Hair\n2. Saliva and Hair\n";
    cout<<"3. Chicken-noodle Soup and Saliva and Hair\n";
    cout<<"4. Green Goo\n5. Exit\n\n";
    cin>>menu;
    
    switch(menu){
      case 1:
        cout<<"The wavelength for hair to pop out is "<<HAIRW;
        break;
      case 2:
        //Keep asking for a number until a valid one is given
        do{
          cout<<"Enter a value of precision that is in the range of 2-7\n";
          cin>>n;
        }while(n>8 || n<2);
        for(n;n>0;n--){
          sumForN+=(static_cast<float>(1)/n);//Sums up the 1/n part of the equation
        }
        calcW=100*sumForN;
        cout<<"The wavelength for hair and saliva ";
        cout<<"to pop out is "<<static_cast<int>(calcW)<<"nm";
        break;
      case 3:
        //Keeps asking for a number until a valid one is given
        do{
          cout<<"Enter a value of precision that is positive and less than 8\n";
          cin>>n;
        }while(n<0 || n>8);
        for(int i=1;i<=n;i++){
          sumForN2+=(static_cast<float>(1)/denomTotal);//Takes the denominator over 1 and adds it
          denomTotal=denomTotal*2;//Multiplies the denominator by 2
        }
        calcW=100*sumForN2;
        cout<<"The wavelength for hair, saliva, and chicken noodle soup";
        cout<<" to stand out is "<<static_cast<int>(calcW)<<"nm\n";
        break;
      case 4:
        //Checks for a valid grade of goo
        do{
          cout<<"What grade of goo is it from 0-6?";
          cin>>grade;
        }while(grade<'0' || grade>'6');
        switch(grade){
          case '6':
            gooW+=35;
            //falls through
          case '5':
            gooW+=55;
            //falls through
          case '4':
            gooW+=77;
            //falls through
          case '3':
            gooW+=23;
            //falls through
          case '2':
            gooW+=17;
            //falls through
          case '1':
            gooW+=43;
            //falls through
          case '0':
            cout<<"The wavelength for grade "<<grade<<" goo is "<<gooW<<"nm";
            break;
        }
        break;
      case 5:
        //Only exits if a 5 is given in the menu
        exit++;
        break;
    }
  }while(exit==0);
  return 0;
}
