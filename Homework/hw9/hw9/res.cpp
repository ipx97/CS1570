#include "res.h"

resident::resident(){
  m_isAlive = true;
  m_isMurderer = false;
  m_hair = rand() % 10  + 1;
  
  ifstream in;
  in.open("input.txt");
  
  static int count = 0;
  string usedName;
  for(int i = 0;i<count;i++){
    in >> usedName;
  }
  
  in >> m_name;
  count++;
    
  //getline(in,m_name);
}
void resident::hair_color_change(int newHair){
  m_hair = newHair;
  return;
}
void resident::kill_me(){
  m_isAlive = false;
  return;
}
ostream &operator << (ostream &out, resident &res){
  out << res.m_name 
      << ((res.m_isAlive)? " is alive, " : " has been murdered, ")
      << ((res.m_isMurderer)? "is a murderer, " : "isn't a murderer, ")
      << "and has hair color " << res.m_hair << ".\n";
  
  return out;
}
