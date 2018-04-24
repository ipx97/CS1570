#include "res.h"

Resident::Resident(){
  m_isAlive = true;
  m_isMurderer = false;
  
  ifstream in;
  in.open("input.txt");
  
  static int count = 0;
  string usedName;
  for(int i = 0;i<count;i++){
    in >> usedName;
  }
  
  in >> m_name;
  count++;
    
  //Closes the file
  in.close();
  
  //Hair
  m_data.m_hairColor = (rand() % HAIR_MAX) + HAIR_MIN;
  
  //DNA
  char percent[21] = "cccttttgggaaaaaaaaaa";
  
  for(int i = 0;i < DNA_SIZE;i++){
    m_data.m_dna[i] = percent[rand() % 19];
  } 

  //Finger print characteristics
  m_data.m_print.m_loops = rand() % (FINGER_MAX + 1);
  m_data.m_print.m_arches = rand() % (FINGER_MAX + 1);
  m_data.m_print.m_whirls = rand() % (FINGER_MAX + 1);

  //Writes the array of the finger print with spaces
  for (short i = 0; i < ARRAY_LENGTH; i++)
  
    for (short j = 0; j < ARRAY_LENGTH; j++)
      m_data.m_print.m_array[i][j] = SPACE;

  //Adds in random stars to the Finger_Print array
  short randI, randJ, starsAdded = 0;

  while (starsAdded < STAR_NUM){

    //Random places within the array
    randI = rand() % ARRAY_LENGTH;
    randJ = rand() % ARRAY_LENGTH;

    //Only adds a star if there is not already a star
    if (m_data.m_print.m_array[randI][randJ] != STAR){
      m_data.m_print.m_array[randI][randJ] = STAR;
      starsAdded++;
    }
  }
}

void Resident::kill_me(){
  m_isAlive = false;
  return;
}


ostream & operator << (ostream & out, Resident & res){
  out << res.m_name 
      << ((res.m_isAlive)? " is alive, " : " has been murdered, ")
      << ((res.m_isMurderer)? "is a murderer, " : "isn't a murderer, ")
      << ".\n";
  
  return out;
}
