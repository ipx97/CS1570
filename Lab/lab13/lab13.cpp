/*
Programmer: Ian Piskulic
Section: D
File: lab13.cpp
Description: Practice use of operator overloading
*/

#include <iostream>
#include <fstream>

using namespace std;

//Class Definition
class Rectangle
{
  private:
    int length;
    int width;

  public:
    //Description:Default constructor for Rectangle
    //Pre:none
    //Post:sets values to one
	  Rectangle();
    //Description:Default constructor for Rectangle
    //Pre:brings in two integers to set as the values
    //Post:both members are set as numbers 1 or more
    Rectangle(int rect_length, int rect_width);
    //Description:Default constructor for Rectangle
    //Pre:brings in one integers to set as the values
    //Post:both members are set as numbers 1 or more
    Rectangle(int rect_width);
    //Description:Default constructor for Rectangle
    //Pre:a single rectangle object
    //Post:sets the calling object to the value of the parameter
	  Rectangle(const Rectangle & source);
    //Description:deducts two from each member
    //Pre:none
    //Post:two less for each member of the calling object
    void operator !();
    //Description:Multiples the parameter and calling objects
    //Pre:a rectangle object
    //Post:returns the calling object
    Rectangle & operator *= (const Rectangle & value);
    //Description:adds a object to the calling object
    //Pre:takes in a rectangle object
    //Post:returns the new calling object
    void operator += (const Rectangle & rec1);
    //Description:outputs the rectangle 
    //Pre:takes in a rectangle object
    //Post:displays the object
    friend ostream & operator << (ostream & stream, const Rectangle & rec);
	 
};

int main()
{
  Rectangle A(3,2);
	Rectangle B(9,5);
	Rectangle C;
	Rectangle D(5);
	Rectangle E(D);
	cout <<"A: " << A;
	cout <<"B: " << B;
	cout <<"C: " << C;
	cout <<"D: " << D;
	cout <<"E: " << E;
	C += A;
  C += B;
	cout <<"C = A + B ==> C: " << C;
	C *= A;
	cout <<"C *= A    ==> C: " << C;
	!C;
	cout <<"!C        ==> C: " << C;

	return 0;
}

//Functions Definitions
Rectangle::Rectangle()
{
  length = 1;
  width = 1;
}
Rectangle::Rectangle(int rect_length, int rect_width)
{
  length = rect_length;
  width = rect_width;
  if((rect_length < 0) || (rect_width))
  {
    cout << "\n***ERROR***\n";
  }
}
Rectangle::Rectangle(int rect_width)
{
  width = rect_width;
  length = 2*width;
  if(rect_width < 0)
    cout << "\n***ERROR***\n";
}
Rectangle::Rectangle(const Rectangle & source)
{
  length = source.length;
  width = source.width;
}
void Rectangle::operator !()
{
  length-=2;
  width-=2;
  if(width < 1)
    width = 1;
  if(length < 1)
    length = 1;
  return;
}
Rectangle & Rectangle::operator *= (const Rectangle & value)
{
  length *= value.length;
  width *= value.width;
  return *this;
}
void Rectangle::operator += (const Rectangle & rec1)
{
  length += rec1.length;
  width += rec1.width;
  return;
}
ostream & operator << (ostream & stream, const Rectangle & rec)
{
  stream << "["<<rec.length<<","<<rec.width<<"]\n";
  return stream;
}
