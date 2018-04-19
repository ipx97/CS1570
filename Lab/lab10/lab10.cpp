/*
Programmer: Ian Piskulic
Section: D
Date: 4/1/15
File: lab10.cpp
Description: Create an account
*/

#include <iostream>
#include <cstring>

using namespace std;

struct account{
  char m_first[17];
  char m_last[20];
  char m_userid[31];
};

//Function Definitions
//Pre:none
//Post:outputs a greeting message to the console
//Description:prints a greeting message to the user
void greeting();
//Pre:takes the struct of the account
//Post:assigns a first and last name to the account
//Description:takes in a first and last name to the account
void read_in(account &user);
//Pre:takes the struct of the account
//Post:prints the first name, last name, and userid
//Description:prints the first and last name and the userid
void print_out(account &user);
//Pre:sends a the character array for password
//Post:outputs stars for the amount of characters in the array
//Description:prints stars in place of the characters in the array
void printPassword(const char password[]);
//Pre:none
//Post:sends a signoff message to the console
//Description:sends a signoff message to the user
void signoff();

//Global Constants
const int PASSMAX = 15;
const int USERMAX = 30;
const int PASSMIN = 7; 


int main(){
  
  //Main Variables
  char password[17];
  char confirm[17];
  account user;
  
  greeting();
  
  read_in(user);
  
  //Gets a password from the user
  do{
    do{
      cout<<"Enter your password(7-15 characters):";
      cin>>password;
    }while(strlen(password)>PASSMAX || strlen(password)<PASSMIN);
    cout<<"Confirm your password:";
    cin>>confirm;
  }while(strcmp(password,confirm) != 0);//Confirms the password
  
  //Prints the user info
  print_out(user);
  
  //Prints the password
  printPassword(password);
  
  signoff();
  
  return 0;
}

void greeting(){
  cout<<"~~~Hi! Please enter your info to sign up~~~\n\n";
  return;
}

void read_in(account &user){
  do{
    cout<<"Enter your first name:";
    cin>>user.m_first;
    cout<<"Enter your last name:";
    cin>>user.m_last;
  }while(strlen(user.m_first) + strlen(user.m_last) > USERMAX);
  return;
}

void print_out(account &user){
  cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
  cout<<"Account info summary:\n";
  
  //Adds the first and last name for the userid
  cout<<"User ID:";
  strcat(user.m_userid,user.m_last);
  strcat(user.m_userid,user.m_first);
  int length = strlen(user.m_userid);
  for(int i=0;i<length;i++){
    cout<<user.m_userid[i];
  }
  
  //Prints the first name
  cout<<"\nFirst name:";
  length = strlen(user.m_first);
  for(int i=0;i<length;i++){
    cout<<user.m_first[i];
  }
  
  //Prints the last name
  cout<<"\nLast name:";
  length = strlen(user.m_last);
  for(int i=0;i<length;i++){
    cout<<user.m_last[i];
  }
  return;
}

void printPassword(const char password[]){
  cout<<endl<<"Password:";
  int length = strlen(password);
  for(int i=0;i<length;i++){
    cout<<"*";
  }
  return;
}

void signoff(){
  cout<<"\nHave a nice day!";
}
