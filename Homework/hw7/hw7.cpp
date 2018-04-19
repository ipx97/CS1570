/*
Programmer: Ian Piskulic      Date: 3/18/2015
File: hw7.cpp                 Section: B
Purpose: To match the bullet information with a gun.
*/

#include "hw7.h"

void greeting(){
  cout<<"~~~~Welcome to the Bullet to Gun Identifier!!!~~~~\n";
  return;
}

void database(bullet data[],const int SIZE){
  srand(time(NULL));
  
  float caliber[3] = {0.22,0.38,0.50};
  int gun = 1;
  
  //Randomizes the values in each gun description
  for(int i = 0;i<SIZE;i++){
    data[i].m_caliber = caliber[rand() % 3];
    
    data[i].m_grooves = rand() % 3 + 5;
  
    data[i].m_widthOfG = 1.0 * (rand() % 6 + 25) / 1000;
  
    data[i].m_widthOfL = 1.0 * (rand() % 6 + 25) / 1000;
  
    if (rand() % 2 == 1)
      data[i].m_marks = true;
    else
      data[i].m_marks = false;
    
    //Takes the name inputs of the user
    cout<<"What is the name of gun #"<<gun<<"'s owner?:";
    cin>>data[i].m_owner;
    gun++;
  }
  
  return;
}

void outputData(const bullet data[],const int SIZE){
  
  //Displays 22cal bullets first
  cout<<endl<<"22Cal"<<endl;
  for(int i = 0;i<SIZE;i++){
    if (data[i].m_caliber == CALIBER22){
      cout<<"("<<data[i].m_caliber<<","<<data[i].m_grooves;
      cout<<","<<data[i].m_widthOfL<<","<<data[i].m_widthOfG;
      if (data[i].m_marks == true)
        cout<<",marks)\n";
      else
        cout<<",no marks)\n";
    }
  }  
                                                      
  //Displays 38cal bullets next
  cout<<"38Cal"<<endl;
  for(int i = 0;i<SIZE;i++){
    if (data[i].m_caliber == CALIBER38){
      cout<<"("<<data[i].m_caliber<<","<<data[i].m_grooves;
      cout<<","<<data[i].m_widthOfL<<","<<data[i].m_widthOfG;
      if (data[i].m_marks == true)
        cout<<",marks)\n";
      else
        cout<<",no marks)\n";
    }
  }
  
  //Displays 50cal bullets last
  cout<<"50Cal"<<endl;
  for(int i = 0;i<SIZE;i++){
    if (data[i].m_caliber == CALIBER50){
      cout<<"("<<data[i].m_caliber<<","<<data[i].m_grooves;
      cout<<","<<data[i].m_widthOfL<<","<<data[i].m_widthOfG;
      if (data[i].m_marks == true)
        cout<<",marks)\n";
      else
        cout<<",no marks)\n";
    }
  }
  return;
}

void getBullet(bullet& gunIn){
  char mark;
  cout<<"\nEnter the bullet info:"<<endl;
  
  //Gets the bullet's caliber
  do{
    cout<<"Caliber(22,38,50):";
    cin>>gunIn.m_caliber;
    gunIn.m_caliber/=100.0;
  }while((gunIn.m_caliber != CALIBER22) && (gunIn.m_caliber != CALIBER38) && (gunIn.m_caliber != CALIBER50));
  //Gets the number of grooves
  do{
    cout<<"Number of lands/grooves(5-7):";
    cin>>gunIn.m_grooves;
  }while(gunIn.m_grooves>7 || gunIn.m_grooves<5);
  //Gets the landwidth
  do{
    cout<<"Landwidth(0.025-0.030):";
    cin>>gunIn.m_widthOfL;
  }while(gunIn.m_widthOfL>GLMAX || gunIn.m_widthOfL<GLMIN);
  //Gets the groovewidth
  do{
    cout<<"Groovewidth(0.025-0.030):";
    cin>>gunIn.m_widthOfG;
  }while(gunIn.m_widthOfG>GLMAX || gunIn.m_widthOfG<GLMIN);
  //Asks if there were chambering marks or not
  do{
    cout<<"Did it have chambering marks?(y/n):";
    cin>>mark;
  }while(mark != 'y' && mark != 'n');
    if (mark == 'y')
      gunIn.m_marks = true;
    else
      gunIn.m_marks = false;
  return;
}

void results(const bullet gunIn,const bool match,const string matchName){
  if (match == false)
    cout<<"\nNo match could be found for that bullet.\n";
  else{
    
    //Random matching outputs
    int choice;
    choice = rand() % 5;
    switch(choice){
      case 0:
        cout<<"\nOh my gosh, it was "<<matchName<<"!!!\n";
        break;
      case 1:
        cout<<"\nOh mon dieu, it was "<<matchName<<"!!\n";
        break;
      case 2:
        cout<<"\nOf course, it was that evil little "<<matchName<<" again.\n";
        break;
      case 3:
        cout<<"\nWell shoot, it was non other then "<<matchName<<".\n";
        break;
      case 4:
        cout<<"\nWow...um, it was "<<matchName<<"again...\n";
        break;
    }
  
  //Describes the gun of the guilty suspect
  cout<<"\nThe gun was a "<<gunIn.m_caliber<<"cal with "<<gunIn.m_grooves;
  cout<<" grooves and a land width of "<<gunIn.m_widthOfL<<" and a groove width off "<<gunIn.m_widthOfG;
  cout<<" with ";
  if (gunIn.m_marks == true)
    cout<<"markings.\n";
  else if(gunIn.m_marks == false)
    cout<<"no markings.\n";
  }
  return;
}

void signoff(){
  cout<<"\n\nHave a nice day fighting crime!\n";
}
