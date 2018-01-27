/*
Programmer: Ian Piskulic      Date: 3/1/2015
File: hw5.cpp                 Section: B
Purpose: To find the wavelength needed to make certain
substances stand out and easily visable
*/

#include <iostream>

using namespace std;

//Function Prototypes

//Description: Greets the user at the start of the program.
//Pre: none
//Post: Prints a welcome message to the console
void greeting();
//Description: Shows the user the menu and takes in an input
//Pre: none
//Post: Prints menu to the console and returns the menu option choice
char present_menu();
//Description: Calculates the TOD of the victim for RigorMortis
//Pre: bodyTemp is positive;ill and cs are either a 1 or a 0
//Post: Returns the calculated int value for TOD
int rigorMortis(const float t, const bool i, const bool cs);
//Description: Calculates the TOD of the victim for AlgorMortis
//Pre: bodyTemp is positive
//Post: Returns the calculated int value for TOD
int algorMortis(const float t);
//Description: Calculates the TOD of the victim for OccularMortis
//Pre: bulging and discoloration are either a 1 or a 0
//Post: Returns the calculated int value for TOD
int occularMortis(const bool dc, const bool b);
//Description: Calculates the TOD of the victim for VitreousPotassiumMortis
//Pre: Potassium is between 3 and 7
//Post: Returns the calculated int value for TOD
int vitreousPotassiumMortis(const float k);
//Description: Calculates the TOD of the victim for StomachMortis
//Pre: shots has to be positive and 10 or less
//Post: Returns the calculated int value for TOD
int stomachMortis(const int s);
//Description: Calculates the estimated range of TOD
//Pre: both positive integers
//Post: Prints the range of TOD
void presentResults(const int d, const int e);

//Constants
const int ETRIGOR=3;
const int ETALGOR=2;
const int ETOCCULAR=5;
const int ETVITREOUS=4;
const int ETSTOMACH=0;

int main(){
  
  //Main Variables
  char choice;
  float bodyTemp;
  char ill2;
  char compSci2;
  char discoloration2;
  char bulging2;
  bool ill;
  bool compSci;
  bool discoloration;
  bool bulging;
  float potassium;
  int shots;
  int et;
  int tod;
  int exit;
  
  
  greeting();
  do{
    choice=present_menu();
    switch(choice){
      case '1':
        do{
          cout<<"What was the body temperature of the victim?:";
          cin>>bodyTemp;
        }while(bodyTemp<0 || bodyTemp>500);
        do{
          cout<<"\nWas the victim ill at time of death?(y/n):";
          cin>>ill2;
        }while(ill2!='y' && ill2!='n');
        if (ill2=='y'){
          bool ill = true;
        }
        else if (ill2=='n'){
          bool ill = false;
        } 
        do{
          cout<<"\nWas the victim a computer scientist?(y/n):";
          cin>>compSci2;
        }while(compSci2!='y' && compSci2!='n');
         if (compSci2=='y'){
           bool compSci = true;
         }
         else if (compSci2=='n'){
           bool compSci = false;
         }                                            
        tod=rigorMortis(bodyTemp,ill,compSci);
        et=ETRIGOR;
        break;
      case '2':
        do{
          cout<<"What was the body temperature of the victim's belly button?:";
          cin>>bodyTemp;
        }while(bodyTemp<0 || bodyTemp>500);
        tod=algorMortis(bodyTemp);
        et=ETALGOR;
        break;
      case '3':
        //Gets a valid input for discoloration
        do{
          cout<<"Has occular discoloration occured?(y/n):";
          cin>>discoloration2;
        }while(discoloration2!='y' && discoloration2!='n');
        //Sets booleans equal to true if yes and false if no
        if (discoloration2 == 'y'){
          discoloration = true;
        }
        else if (discoloration2 == 'n'){
          discoloration = false;
        }
        //Gets a valid input for bulging eyes
        do{
          cout<<"Are the eyes bulging?(y/n):";
          cin>>bulging2;
        }while(bulging2!='y' && bulging2!='n');
        //Sets booleans equal to true if yes and false if no
        if (bulging2 == 'y'){
          bulging = true;
        }
        else if (bulging2 == 'n'){
          bulging = false;
        }
        tod=occularMortis(discoloration,bulging);
        et=ETOCCULAR;
        break;
      case '4':
        //Checks for a valid potassium concentration
        do{
          cout<<"What is the potassium concentration from the eye fluid?(3-7):";
          cin>>potassium;
        }while(potassium<3 || potassium>7);
        tod=vitreousPotassiumMortis(potassium);
        et=ETVITREOUS;
        break;
      case '5':
        //Checks for a valid number of shots
        do{
          cout<<"How many shots of whiskey are in the victim's stomach?(0-10):";
          cin>>shots;
        }while(shots>10 || shots<0);
        tod=stomachMortis(shots);
        et=ETSTOMACH;
        break;
      case '6':
        exit++;
        break;
      default:
        cout<<"Invalid input\n\n";
    }
    if(exit==0){
      presentResults(tod,et);
    }
  }while(exit==0);
  cout<<"Goodbye!\n";
	return 0;
}


//Function Declarations

void greeting(){
  cout<<"Welcome to the TOD Determination System!";
  return;
}

char present_menu(){
  //Displays menu
  cout<<"\n\nTOD Determination Options\n\n";
  cout<<"1. RigorMortis\n2. AlgorMortis\n3. OccularMortis\n";
  cout<<"4. VitreousPotassiumMortis\n5. StomachMortis\n6. QuitMortis\n";
  //Gets menu choice
  char menu;
  cin>>menu;
  cout<<endl<<endl;
  return menu;
}

int rigorMortis(const float t, const bool i, const bool cs){
  float d = (98.6-t)/2.1;
  if (i==1){
    d+=1.5;
  }
  if (cs==1){
    d-=2.5;
  }
  d+=.5;//Rounds the number to the nearest integer
  return static_cast<int>(d+.5);
}

int algorMortis(const float t){
  float d = (98.6-t)/1.5;
  d+=.5;//Rounds the number to the nearest integer
  return static_cast<int>(d+.5);
}

int occularMortis(const bool dc, const bool b){
  int d;
  if(b==1 && dc==1){
    d = 24;
  }
  else if(b==1 && dc==0){
    d = 16;
  }
  else if(b==0 && dc==1){
    d = 7;
  }
  else if(b==0 && dc==0){
    d = 4;
  }
  return d;
}

int vitreousPotassiumMortis(const float k){
  float d = (17.14*k)-39.1;
  d+=.5;//Rounds the number to the nearest integer
  return static_cast<int>(d);
}

int stomachMortis(const int s){
  int d = 10-s;
  return d;
}

void presentResults(const int d, const int e){
  //Allows no negative hours while calculating min and max hours
  int dMin = d-e;
  if (dMin<0){
    dMin = 0;
  }
  int dMax = d+e;
  if (dMax<0){
    dMax = 0;
  }
  
  //Displays the results to the user
  cout<<"Time of death of the victim is estimated between "<<dMin;
  cout<<" and "<<dMax<<" hours before discovery.";
  return;
}
