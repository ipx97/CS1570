#include "room.h"

CrimeRoom::CrimeRoom(){
  m_murderCommitted = false;
  m_deadGuy = "";
}

void CrimeRoom::meeting(Resident & a,Resident & b){
  if(murder()){
    m_murderCommitted = true;
    if(rand() % 2){
      m_deadGuy = a.m_name;
      a.m_isAlive = false;
      b.m_isMurderer = true;
      m_dropData = b.m_data;
    }
    else{
      m_deadGuy = b.m_name;
      b.m_isAlive = false;
      a.m_isMurderer = true;
      m_dropData = a.m_data;
    }
  }
  return;
}
  
bool CrimeRoom::murder(){
  if (rand() % 10 == 1)
    return true;
  else
    return false;
}

bool CrimeRoom::check_room(const Resident a,const Resident b){
  if (m_murderCommitted){
    cout << "A murder has been committed and ";
    if (!a.m_isAlive)
      cout << a.m_name << " is dead!\n";
    else
      cout << b.m_name << " is dead!\n";
    return true;
  }
  else{
    cout << a.m_name << " and " << b.m_name << " meet";
    return false;
  }
}

void CrimeRoom::reset(){
  m_deadGuy = "";
  m_murderCommitted = false;
  return;
}
