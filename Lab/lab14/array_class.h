/*
Programmer: Ian Piskulic
Section: D
File: array_class.h
Description: Practice use of template classes
*/

#include <iostream>
#include <fstream>

using namespace std;

#ifndef ARRAY_CLASS_H
#define ARRAY_CLASS_H

template <class T>
class Array_Class
{
  private:
    T m[4];
  public:
    Array_Class(T m_0, T m_1, T m_2, T m_3);
    Array_Class(T m_array[]);
    Array_Class();
    void operator *= (T rhs[]);
    friend Array_Class<T> operator + (Array_Class<T> rhs);
    friend ostream & operator << (ostream & out, Array_Class & r);
};

#endif
