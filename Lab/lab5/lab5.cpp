/*
Programmer: Ian Piskulic
Section: D
File: lab5.cpp
Purpose: 
*/

#include <iostream>
using namespace std;

char vote;//the vote from that turn

//the number of votes for each brand
int apple;
int lenovo;
int dell;
int hp;
int wasted;
int const TOTV=10;

int main(){

  cout<<"Welcome to the E-Voting System\n\nHere are the laptop brands:\n";
  cout<<"A:Apple\n";
  cout<<"B:Lenovo\n";
  cout<<"C:Dell\n";
  cout<<"D:HP\n\n";

  //Runs for 10 votes
  for(int i=0;i<10;i++){
  
    //Asks user for input of vote
    cout<<"What brand of laptop do you vote for?:";
    cin>>vote;
    
    
    //Takes lower and upper case for each vote
    switch(vote){
      case 'a':
      case 'A':
        apple++;
        cout<<"You voted for Apple\n";
        break;
      case 'b':
      case 'B':
        lenovo++;
        cout<<"You voted for Lenovo\n";
        break;
      case 'c':
      case 'C':
        dell++;
        cout<<"You voted for Dell\n";
        break;
      case 'd':
      case 'D':
        hp++;
        cout<<"You voted for HP\n";
        break;
      //If it matches none of the options, adds to wasted votes
      default:
        wasted++;
        cout<<"You wasted your vote\n";
    }
  }
  
  //Displays the amount of votes for each brand and their percentage
  cout<<"\nHere is the voting summary:\n\n";
  cout<<"Laptops      Votes    Percentages(%)";
  cout<<"\nApple         "<<apple<<"        "<<(static_cast<float>(apple)/TOTV);
  cout<<"\nLenovo        "<<lenovo<<"        "<<(static_cast<float>(lenovo)/TOTV);
  cout<<"\nDell          "<<dell<<"        "<<(static_cast<float>(dell)/TOTV);
  cout<<"\nHP            "<<hp<<"        "<<(static_cast<float>(hp)/TOTV);
  cout<<"\nWasted Votes  "<<wasted<<"        "<<(static_cast<float>(wasted)/TOTV);
  
  cout<<"\n\nThanks for using the E-Voting System\nHave a nice day!\n";
  
  return 0; 
}
