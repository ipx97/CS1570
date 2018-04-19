#include "hw10.h"

void greeting(){
  cout << "Welcome to the ROOM OF DEATH! only one or none will leave alive....";
  return;
} 

int resCount(Resident res[]){
  short resLeft = 0;
  
  for (short i = 0; i < RES_NUM; i++)
    if (res[i].checkDead())
      resLeft++;
    
  return resLeft;
}

forensic_data & forensic_data::operator = (const forensic_data & rhs){
  m_hairColor = rhs.m_hairColor;
  
  for (short i = 0;i < DNA_SIZE; i++){
    m_dna[i] = rhs.m_dna[i];
  }
  
  for (short column = 0;column < SIZE2D;column++){
    for(short row = 0;row < SIZE2D;row++){
      m_print.m_array[row][column] = rhs.m_print.m_array[row][column];
    }
  }
  
  m_print.m_loops = rhs.m_print.m_loops;
  m_print.m_whirls = rhs.m_print.m_whirls;
  m_print.m_arches = rhs.m_print.m_arches;
  
  return *this;
}

void encounters(Resident res[], CrimeRoom & room){
  short rand1, rand2;
  static short meetingCount = 1;
  
  do{
    do{
      rand1 = rand() % RES_NUM;
      rand2 = rand() % RES_NUM;
    }while (rand1 == rand2 || !res[rand1].checkDead() || !res[rand2].checkDead());
  
  
  room.meeting(res[rand1], res[rand2]);
  
  //Outputs day and time
    switch((meetingCount - 1) % 4){
    
      case 0:
        cout << "\n\nDay " << ((meetingCount / 4) + 1)<<":  "
          <<" 8:00 - ";
        break;
      
      case 1:
        cout << "\n\n  12:00 - ";
        break;
    
      case 2:
        cout << "\n\n  3:00 - ";
        break;
    
      case 3:
        cout << "\n\n  7:00 - ";
        break;
    }
    
    meetingCount++;
    
  }while(!room.check_room(res[rand1], res[rand2]));
  
  return;
}

void investigation(CSI_Agent & agent, Resident res[],
  const CrimeRoom & room, Judicial & judge){
    
  bool solved = false;
  short index, numVisits;
  
  for (short visits = 1; visits <= VISITS_MAX && !solved; visits++){
    agent.visitCrimeScene(room);
    for (short interrogate = 0; interrogate < RES_NUM && !solved;
      interrogate++){
      solved = agent.perpSearch(res[interrogate]);
      index = interrogate;
    }
    numVisits = visits;
  }
  
  if (solved){
    cout << "\n    The case has been solved!\n"
         << agent << " solved the case in "
         << numVisits <<" visits, and "
         << res[index].getName() <<" is the killer!\n";
    judge.judgement(res[index]);
  }
  else
    cout << "\nSorry to say this, but, this one got away...\n";
}

void ending(Resident res[]){
  bool liveRes = false;
  short i;
  
  for(i = 0; i < RES_NUM && !liveRes; i++)
    if(res[i].checkDead())
      liveRes = true;
  if (liveRes)
    cout << "\nThe only living resident is "<< res[i].getName() << ".\n";
  else
    cout << "\nThere were no survivors...\n";
  
  return;
}
  
void signoff(){
  cout << "\nGoodbye cruel world!\n";
  
  return;
}
