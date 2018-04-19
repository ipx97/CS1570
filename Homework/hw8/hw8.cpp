#include "hw8.h"

void greeting(){
  cout<<"Good day!\n";
}

void createSample(char arr[]){
  srand(time(NULL));//Seeds srand with time
  char percent[21] = "cccttttgggaaaaaaaaaa";
  for(int i = 0;i<128;i++){
    arr[i] = percent[rand() % 19];
  }
  return;
}

void createDead(char arr[]){
  srand(time(NULL));//Seeds srand with time
  char percent[21] = "cccttttgggaaaaaaaaaa";
  for(int i = 0;i<16;i++){
    arr[i] = percent[rand() % 19];
    if ((rand() % 99 == 0) || (rand() % 99 == 1))
      arr[i] = '-';
  }
  return;
}

bool findMatch(char sample[], char dead[]){
  int e = 0;
  bool match;
  
  //If there are less than two errors, it's a match
  for (int l = 0;l<113;l++){
    for (int i = 0;i<16;i++){
      if (sample[l+i] != dead[i])
        e++;
      if (e<2)
        match = true;
      else
        match = false;
    }
    //Resets errors to 0 after going through all 16 characters
    e = 0;
  }
  return match;
}

void printArray(char arr[], int SIZE){
  for (int i = 0;i<(SIZE - 1);i++){
    cout<<arr[i];
  }
  return;
}

void createDental(char arr[]){
  srand(time(NULL));//Seeds srand with time
  char percent[11] = "nnnnnwwagl";
  for(int i = 0;i<32;i++){
    arr[i] = percent[rand() % 9];
  }
  return;
}

void signoff(){
  cout<<"\nHave a great day!\n";
  return;
}
