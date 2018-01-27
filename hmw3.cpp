/*
Programmer: Ian Piskulic      Date: 2/12/2015
File: hmw3.cpp                Section: B
Purpose: To decide which suspect is more
likely to commit cannibalism or robbery
based on a description of each suspect
*/

#include <iostream>
#include <string>

using namespace std;

string name;
char crime;
char suspect1Cluster;
char suspect2Cluster;
char suspect1Disorder;
char suspect2Disorder;
char suspect1Feature;
char suspect2Feature;
int suspect1Cannibalism;
int suspect2Cannibalism;
int suspect1Robbery;
int suspect2Robbery;
int const NARCIS_CAN=3;
int const NARCIS_ROB=12;
int const SAD_CAN=4;
int const SAD_ROB=1;
int const DEPRES_CAN=5;
int const DEPRES_ROB=3;
int const COMP_CAN=3;
int const COMP_ROB=7;
int const AVOID_CAN=2;
int const AVOID_ROB=8;
int const CREP_CAN=9;
int const CREP_ROB=3;
int const STUP_CAN=12;
int const STUP_ROB=22;
int const WEIRD_CAN=33;
int const WEIRD_ROB=45;
string suspect1Description;
string suspect2Description;

int main(){
  cout<<"Welcome to the crime prediction system. What is your name?:";
  cin>>name;

  //Asks for a crime input until a valid one is given (1 or 2)
  do{
    cout<<endl<<endl<<name<<", please enter the crime (1 for cannibalism, 2 for robbery):";
    cin>>crime;
  }while (!(crime=='1' || crime=='2'));

  //Suspect 1

  //Asks for cluster until a valid one is given(A or B)
  do{
    cout<<"\nEnter suspect1's cluster (A or B):";
    cin>>suspect1Cluster;
  }while(suspect1Cluster!='A' && suspect1Cluster!='B');

  //Cluster A
  if (suspect1Cluster=='A'){
    do{
      cout<<"\nEnter the personality disorder (1 for paranoid, 2 for schizoid):";
      cin>>suspect1Disorder;
    }while (!(suspect1Disorder=='1' || suspect1Disorder=='2'));
    //Disorder to Feature
    if (suspect1Disorder=='1'){
      do{
        cout<<"\nEnter the feature (1 for narcissistic, 2 for sadistic):";
        cin>>suspect1Feature;
      }while (!(suspect1Feature=='1' || suspect1Feature=='2'));
      //Feature to Chances
      if (suspect1Feature='1'){
        suspect1Cannibalism=NARCIS_CAN;
        suspect1Robbery=NARCIS_ROB;
        suspect1Description="A as paranoid and narcissistic";
      }
    else{
      suspect1Cannibalism=SAD_CAN;
      suspect1Robbery=SAD_ROB;
      suspect1Description="A as paranoid and sadistic";
    }
  }
    else{
      do{
        cout<<"\nEnter the feature (1 for depressive, 2 for compulsive):";
        cin>>suspect1Feature;
      }while (!(suspect1Feature=='1' || suspect1Feature=='2'));
      //Feature to Chances
      if (suspect1Feature=='1'){
        suspect1Cannibalism=DEPRES_CAN;
        suspect1Robbery=DEPRES_ROB;
        suspect1Description="A as schizoid and depressive";
      }
      else{
        suspect1Cannibalism=COMP_CAN;
        suspect1Robbery=COMP_ROB;
        suspect1Description="A as schizoid and depressive";
      }
    }
  }

  //Cluster B
  else{
    do{
      cout<<"\nEnter the personality disorder (1 for antisocial, 2 for just a jerk):";
      cin>>suspect1Disorder;
    }while (!(suspect1Disorder=='1' || suspect1Disorder=='2'));
    //Disorder to Feature
    if (suspect1Disorder==1){
      do{
        cout<<"\nEnter the feature (1 for avoidant, 2 for creepy):";
        cin>>suspect1Feature;
      }while (!(suspect1Feature=='1' || suspect1Feature=='2'));
    //Feature to Chances
      if (suspect1Feature=='1'){
        suspect1Cannibalism=AVOID_CAN;
        suspect1Robbery=AVOID_ROB;
        suspect1Description="B as antisocial and avoidant";
      }
      else{
        suspect1Cannibalism=CREP_CAN;
        suspect1Robbery=CREP_ROB;
        suspect1Description="B as antisocial and creepy";
      }
    }
    else{
      do{
        cout<<"\nEnter the feature (1 for stupid, 2 for weirdo):";
        cin>>suspect1Feature;
      }while (!(suspect1Feature=='1' || suspect1Feature=='2'));
      //Feature to Chances
      if (suspect1Feature=='1'){
        suspect1Cannibalism=STUP_CAN;
        suspect1Robbery=STUP_ROB;
        suspect1Description="B as just a jerk and stupid";
      }
      else{
        suspect1Cannibalism=WEIRD_CAN;
        suspect1Robbery=WEIRD_ROB;
        suspect1Description="B as just a jerk and a weirdo";
      }//Feature to Chance
    }//Disorder to Feature
  }//clusterB

  //Suspect 2

  //Asks for cluster until a valid one is given(A or B)
  do{
    cout<<"\nEnter suspect2's cluster (A or B):";
    cin>>suspect2Cluster;
  }while (!(suspect2Cluster=='A' || suspect2Cluster=='B'));

  //Cluster A
  if (suspect2Cluster=='A'){
    do{
      cout<<"\nEnter the personality disorder (1 for paranoid, 2 for schizoid):";
      cin>>suspect2Disorder;
    }while (!(suspect2Disorder=='1' || suspect2Disorder=='2'));
    //Disorder to Feature
    if (suspect2Disorder=='1'){
      do{
        cout<<"\nEnter the feature (1 for narcissistic, 2 for sadistic):";
        cin>>suspect2Feature;
      }while (!(suspect2Feature=='1'|| suspect2Feature=='2'));
      //Feature to Chances
      if (suspect2Feature='1'){
        suspect2Cannibalism=NARCIS_CAN;
        suspect2Robbery=NARCIS_ROB;
        suspect2Description="A as paranoid and narcissistic";
      }
      else{
        suspect2Cannibalism=SAD_CAN;
        suspect2Robbery=SAD_ROB;
        suspect2Description="A as paranoid and sadistic";
      }
    }

    else{
      do{
        cout<<"\nEnter the feature (1 for depressive, 2 for compulsive):";
        cin>>suspect2Feature;
      }while (!(suspect2Feature=='1' || suspect2Feature=='2'));
      //Feature to Chances
      if (suspect2Feature=='1'){
        suspect2Cannibalism=DEPRES_CAN;
        suspect2Robbery=DEPRES_ROB;
        suspect2Description="A as schizoid and depressive";
      }
      else{
        suspect2Cannibalism=COMP_CAN;
        suspect2Robbery=COMP_ROB;
        suspect2Description="A as schizoid and compulsive";
      }
    }
  }
  //Cluster B
  else if(suspect2Cluster=='B'){
    do{
      cout<<"\nEnter the personality disorder (1 for antisocial, 2 for just a jerk):";
      cin>>suspect2Disorder;
    }while (!(suspect2Disorder=='1' || suspect2Disorder=='2'));
    //Disorder to Feature
    if (suspect2Disorder=='1'){
      do{
        cout<<"\nEnter the feature (1 for avoidant, 2 for creepy):";
        cin>>suspect2Feature;
      }while (!(suspect2Feature=='1' || suspect2Feature=='2'));
      //Feature to Chances
      if (suspect2Feature=='1'){
        suspect2Cannibalism=AVOID_CAN;
        suspect2Robbery=AVOID_ROB;
        suspect2Description="B as antisocial and avoidant";
      }
      else{
        suspect2Cannibalism=CREP_CAN;
        suspect2Robbery=CREP_ROB;
        suspect2Description="B as antisocial and creepy";
      }
    }
    else{
      do{
        cout<<"\nEnter the feature (1 for stupid, 2 for weirdo):";
        cin>>suspect2Feature;
      }while (!(suspect2Feature=='1' || suspect2Feature=='2'));
      //Feature to Chances
      if (suspect2Feature=='1'){
        suspect2Cannibalism=STUP_CAN;
        suspect2Robbery=STUP_ROB;
        suspect2Description="B as just a jerk and stupid";
      }
      else{
        suspect2Cannibalism=WEIRD_CAN;
        suspect2Robbery=WEIRD_ROB;
        suspect2Description="B as just a jerk and a weirdo";
      }//Feature to Chance
    }//Disorder to Feature
  }//clusterB

  //Suspect Description w/ Possibilities

  //Cannibalism
  if (crime=='1'){
    cout<<"\nSuspect 1 is described within cluster "<<suspect1Description;
    cout<<"\nSuspect 1 has a "<<suspect1Cannibalism<<"% chance of cannibalism";
    cout<<"\n\nSuspect 2 is described within cluster "<<suspect2Description;
    cout<<"\nSuspect 2 has a "<<suspect2Cannibalism<<"% chance of cannibalism";
    if(suspect1Cannibalism>suspect2Cannibalism){
      cout<<endl<<endl<<"Suspect 1 is guilty of cannibalism!\n";
    }
    else if(suspect1Cannibalism<suspect2Cannibalism){
      cout<<endl<<endl<<"Suspect 2 is guilty of cannibalism!\n";
    }
    else{
      cout<<endl<<endl<<"Neither suspect could be found guilty of cannibalism.\n";
    }
  }

  //Robbery
  else if (crime=='2'){
    cout<<"\nSuspect 1 is described within cluster "<<suspect1Description;
    cout<<"\nSuspect 1 has a "<<suspect1Robbery<<"% chance of robbery";
    cout<<"\n\nSuspect 2 is described within cluster "<<suspect2Description;
    cout<<"\nSuspect 2 has a "<<suspect2Robbery<<"% chance of robbery";
    if(suspect1Robbery>suspect2Robbery){
      cout<<endl<<endl<<"Suspect 1 is guilty of robbery!\n";
    }
    else if(suspect1Robbery<suspect2Robbery){
      cout<<endl<<endl<<"Suspect 2 is guilty of robbery!\n";
    }
    else{
      cout<<endl<<endl<<"Neither suspect could be found guilty of robbery.\n";
    }
  }
  return 0;
}//main
