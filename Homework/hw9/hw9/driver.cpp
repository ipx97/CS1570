#include "res.h"
#include "room.h"

int main(){
  ifstream in;
    
  //Connects to the files
  in.open("input.txt");
  
  //Constructs residents
  srand(time(NULL));
  resident res1;
  resident res2;
  resident res3;
  resident res4;
  resident res5;
  
  //Output of residents
  cout<<res1<<res2<<res3<<res4<<res5;
  
  //Calling member functions
  res5.hair_color_change(3);
  res5.kill_me();
  cout<<endl<<res5;
  
  //Constructs crime room
  crime_room room;
  
  //Goes through five meetings
  room.meeting(res3,res5);
  room.check_room();
  
  room.meeting(res2,res5);
  room.check_room();
  
  room.meeting(res3,res4);
  room.check_room();
  
  room.meeting(res1,res5);
  room.check_room();
  
  room.meeting(res3,res2);
  room.check_room();
  

  return 0;
}
