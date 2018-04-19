#include "hw6.h"

int main(){
	
  //Main Variables
  char menu;
  float index;
  char soup;
  int height;
  char grade;
  int calcW;
  bool exit;
  int n;
  
  greeting();
  do{
    //Shows the menu and takes the choice from the user
    menu=present_menu();
    
    switch(menu){
      case '1':
        index=hair_index();
        calcW=hair(index);
        
        cout<<"The wavelength for the hair to pop out is "<<calcW;
        break;
      
      case '2':
        //Keep asking for a number until a valid one is given
        do{
          cout<<"Enter a value of precision that is in the range of 1-7\n";
          cin>>n;
        }while(n<1 || n>7);
        
        index = hair_index();
        calcW = saliva_hair(n,index);
        
        cout<<"The wavelength for hair and saliva ";
        cout<<"to pop out is "<<calcW<<"nm";
        break;
        
      case '3':
        //Keeps asking for a number until a valid one is given
        do{
          cout<<"Enter a value of precision that is positive and less than 8\n";
          cin>>n;
        }while(n<0 || n>7);
        do{
          cout<<"Was the soup homemade?(y/n):";
          cin>>soup;
        }while(soup != 'y' && soup != 'n');
        calcW=soup_saliva_hair(soup,n);
        cout<<"The wavelength for hair, saliva, and chicken noodle soup";
        cout<<" to stand out is "<<calcW<<"nm\n";
        break;
        
      case '4':
        //Checks for a valid grade of goo
        do{
          cout<<"What grade of goo is it from 0-6?";
          cin>>grade;
        }while(grade<'0' || grade>'6');
        //Checks for a valid height
        do{
          cout<<"What is the height of the alien?(1,2, or 3 ft):";
          cin>>height;
        }while(height != 1 && height != 2 && height != 3);
        calcW=green_goo(grade,height);
        cout<<"The wavelength for grade "<<grade;
        cout<<" goo and a height of "<<height<<"ft is "<<calcW<<"nm";
        break;
        
      case '5':      
        //Only exits if a 5 is given in the menu
        exit=true;
        break;
      }
      
  }while(exit==false);
  signoff();
  return 0;
}
