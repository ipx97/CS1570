/*
Programmer: Ian Piskulic
Section: D
File: lab11.cpp
Description: This program takes an input file with names and birth year of 
students and outputs a file with the names, ages, and user ids.
*/
 
#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

//Global Constants
const short NAME = 10;
const short ID = 20;
const short YEAR = 2015;
const short CLASS_SIZE = 5;

//Struct Definitions
struct student {
  char m_first[NAME+1];
  char m_last[NAME+1];
  char m_id[ID+1];
  short m_birthYear;
  short m_age;
};

void greet();
//Description: This function prints a greeting message to the user.
//Pre: None
//Post: None

void buildStudent(student & stud, ifstream & file);
//Description: This function builds a student from the information in the file.
//Pre: This function is passed one student by reference to be worked on and an
//ifstream for the file containing the students.
//Post: None

void printStudent(student & stud, ofstream & file);
//Description: This function prints the students' information the output file
//Pre: This function is passed the student to print and the output file ofstream.
//Post: None

void signoff();
//Description: This function prints a sign off message to the user.
//Pre: None
//Post: None

int main(){
  ifstream in;
  ofstream out;
  
  student stud;
    
  //Connects to the files
  in.open("input.txt");
  out.open("output.txt");
  
  //Outputs a greeting message
  greet();
  
  //Functions for every student in the input file
  for (int i = 0; i < CLASS_SIZE; i++){
    
    //Calls the build student function
    buildStudent(stud, in);
    
    //Calls the print student function
    printStudent(stud, out);
  }
  
  //Closes the connections to the files
  in.close();
  out.close();
  
  //Prints a signoff message to the user
  signoff();
  
  return 0;
}

//Function Definitions

//Greets the user
void greet(){
  cout << "\n~~~Hello. Welcome to the ID CREATOR!!~~~";
  return;
}

//Builds the student with data from the input file
void buildStudent(student & stud, ifstream & file){
  
  short length, firstNameIndex;
  
  //Reads the information in the file
  file >> stud.m_first;
  file >> stud.m_last;
  file >> stud.m_birthYear;
  
  //Calculates the age of the student
  stud.m_age = YEAR - stud.m_birthYear;
  
  //Generates the ID
  strcpy(stud.m_id, stud.m_last);
  strcat(stud.m_id, "_");
  strcat(stud.m_id, stud.m_first);
  
  //Capitalizes the first and last name
  if (islower(stud.m_id[0])) 
    stud.m_id[0] = toupper(stud.m_id[0]);
  firstNameIndex = strlen(stud.m_last) + 1;
  if (islower(stud.m_id[firstNameIndex])) 
    stud.m_id[firstNameIndex] = toupper(stud.m_id[firstNameIndex]);
  
  //Replaces the 'e' with 'X' in the ID
  length = strlen(stud.m_id);
  for (int i = 0; i < length; i++){
    if (stud.m_id[i] == 'e') stud.m_id[i] = 'X';
  }
  return;
}

//Prints the students' info to the output file
void printStudent(student & stud, ofstream & file){
  file << stud.m_first << " " <<stud.m_last << " " 
       << stud.m_id << " " << stud.m_age << "\r\n";
       
  return;
}

//Prints a signoff message
void signoff(){
  cout << "\nGoodbye!\n";
  return;
}
