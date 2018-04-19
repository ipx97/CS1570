#include "array_class.h"


int main()
{
  //Main Varibles
  Array_Class <int> arr[4] {3,2,3,5};
  Array_Class A(1,2,3,4);
  Array_Class B(arr);
  Array_Class C;
  
  cout << "A: "<<A<<"B: "<<B<<"C: "<<C;
  B *= A;
  C = A + B;
  cout << "A: "<<A<<"B: "<<B<<"C: "<<C;
 
  return 0;
}
