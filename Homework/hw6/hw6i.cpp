#include "hw6.h"

void greeting(){
  cout<<"Welcome to the NEW MODERNIZED CRIME-o-LIGHT!";
  return;
}

char present_menu(){
  cout<<"\n\n~~~CRIME-O-LIGHT~~~\n\n1. Hair\n2. Saliva and Hair\n";
  cout<<"3. Chicken-noodle Soup and Saliva and Hair\n";
  cout<<"4. Green Goo\n5. Exit\n\n";
  char choice;
  cin>>choice;
  return choice;//Returns menu choice
}

int hair(const float index){
  float calcW;
  calcW = 400*index;
  return static_cast<int>(calcW);
}

float hair_index(){
  float index;
  char color;
  
  //Checks if the color input is valid
  do{
    cout<<"What color of hair is it? ";
    cout<<"b for blonde, k for black, w for brown:";
    cin>>color;
  }while(color != 'b' && color != 'w' && color != 'k');
  
  //If hair is blonde
  if (color == 'b'){
    index = 1.2;
  }
  //If hair is black
  else if (color == 'k'){
    index = 1.7;
  }
  //If hair is brown   
  else if (color == 'w'){
    index = 1.3;
  }
  return index;
}

int saliva_hair(const int n,const float index){
  float sum=0;
  float calcW;

  for(int k=1;k<=n;k++){
    sum+=(static_cast<float>(1)/k);//Sums up the 1/n part of the equation
  }
  calcW=100*sum*index;
  return static_cast<int>(calcW);
}

int soup_saliva_hair(const char soup,const int n){
  int denomTotal=1;
  float sum=0;
  for(int i=1;i<=n;i++){
    sum+=(static_cast<float>(1)/denomTotal);//Takes the denominator over 1 and adds it
    denomTotal=denomTotal*2;//Multiplies the denominator by 2
  }
  float calcW;
  calcW = (100*sum);
  
  //If soup is homemade
  if (soup == 'y'){
    calcW+=2.3;
  }
  return static_cast<int>(calcW);
}

int green_goo(const char grade,const int height){
  int calcW=200;
  cout<<endl<<calcW<<endl;
  switch(grade){
    case '6':
      calcW+=35;
      //falls through
    case '5':
      calcW+=55;
      //falls through
    case '4':
      calcW+=77;
      //falls through
    case '3':
      calcW+=23;
      //falls through
    case '2':
      calcW+=17;
      //falls through
    case '1':
      calcW+=43;
      //falls through
    case '0':
      cout<<endl<<calcW<<endl;
      calcW*=height;//Multiplies the height 
      break;
  }
  return calcW;
}        
  
void signoff(){
  cout<<"Goodbye!\n";
  return;
}
