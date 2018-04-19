#include "res.h"

Resident::Resident(){
  m_isAlive = true;
  m_isMurderer = false;
  m_hair = rand() % 10  + 1;
  
  ifstream in;
  in.open("input.txt");
  
  //Outputs the next name line by line
  static int count = 0;
  string usedName;
  for(int i = 0;i<count;i++){
    in >> usedName;
  }
  in >> m_name;
  count++;
}

void Resident::hair_color_change(int newHair){
  m_hair = newHair;
  return;
}

void Resident::kill_me(){
  m_isAlive = false;
  return;
}

ostream &operator << (ostream &out, Resident &res){
  out << res.m_name 
      //Determines which message to output based on member variables
      << ((res.m_isAlive)? " is alive, " : " has been murdered, ")
      << ((res.m_isMurderer)? "is a murderer, " : "isn't a murderer, ")
      << "and has hair color " << res.m_hair << ".\n";
  
  return out;
}

void greeting(){
  cout<<"~~~~~Welcome to the CRIME ROOM SOLVER!~~~~~\n\n";
  return;
}

void signoff(){
  cout<<"\n\nAdios!!!\n";
  return;
}
