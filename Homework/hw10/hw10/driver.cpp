#include "hw10.h"

int main(){
  
  //Constructs residents
  srand(time(NULL));
  Resident res[RES_NUM];
  
  //Constructs crime room
  CrimeRoom room;
  
  //Constructs the judge
  Judicial judge("Judy", 50);
  
  greeting();
  
  //Goes through four meetings per day
  while (resCount(res) > 1){
    encounters(res, room);
    CSI_Agent agent("Spencer Reid");
    investigation(agent, res, room, judge);
    room.reset();
  }
  ending(res);
  signoff();

  return 0;
}
