#include "judicial.h"

void Judicial::judgement(Resident & murderer) const{
  int verdict = rand() % (MAX + 1);
  if (verdict >= m_convRate)
    kill(murderer);
  else
    cout<<"\nThe accused, "<< murderer.getName() 
      <<", has been sent to the guillotine!!\n";
      
  return;
}

void Judicial::kill(Resident & killer) const{
  killer.kill_me();
  cout<<"\nThe accused, "<<killer.getName()<<", has been executed!\n";
  
  return;
}
