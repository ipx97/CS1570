#include "room.h"
#include "res.h"

Crime_room::Crime_room(){
  m_murderCommitted = false;
  m_deadGuy = "";
  m_hair = 0;
}

void Crime_room::meeting(Resident & a,Resident & b){
  if(murder()){
    m_murderCommitted = true;
    //Randomizes who committed the murder
    if (rand() % 2 == 1){
      m_deadGuy = a.m_name;
      a.m_isAlive = false;
      b.m_isMurderer = true;
      m_hair = b.m_hair;
    }
    else{
      m_deadGuy = b.m_name;
      b.m_isAlive = false;
      a.m_isMurderer = true;
      m_hair = a.m_hair;
    }
  }
  return;
}
  
bool Crime_room::murder(){
  if (rand() % 2 == 1)
    return true;
  else
    return false;
}

void Crime_room::check_room(){
  if (m_murderCommitted)
    cout<<m_deadGuy<<" has been murdered!!!\n";
  return;
}
