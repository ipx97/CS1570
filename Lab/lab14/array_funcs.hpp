#include "array_class.h"

template <class T>
Array_Class<T>::Array_Class(T m_0, T m_1, T m_2, T m_3)
{
  m[0] = m_0;
  m[1] = m_1;
  m[2] = m_2;
  m[3] = m_3;
}

template <class T>
Array_Class<T>::Array_Class(T m_array[])
{
  m[0] = m_array[0];
  m[1] = m_array[1];
  m[2] = m_array[2];
  m[3] = m_array[3];
}

template <class T>
Array_Class<T>::Array_Class()
{
  m[0] = 0;
  m[1] = 0;
  m[2] = 0;
  m[3] = 0;
}

template <class T>
void Array_Class<T>::operator *= (T rhs[])
{
  m[0] = m[0] * rhs.m[0];
  m[1] = m[1] * rhs.m[1];
  m[2] = m[2] * rhs.m[2];
  m[3] = m[3] * rhs.m[3];
  
  return;
}

template <class T>
Array_Class<T> operator + (Array_Class<T> rhs)
{
  Array_Class<int> temp;
  
  temp.m[0] = m[0] + rhs.m[0];
  temp.m[1] = m[1] + rhs.m[1];
  temp.m[2] = m[2] + rhs.m[2];
  temp.m[3] = m[3] + rhs.m[3];
  
  return temp;
}

template <class T>
void operator = (Array_Class<T> rhs)
{
  m[0] = rhs.m[0];
  m[1] = rhs.m[1];
  m[2] = rhs.m[2];
  m[3] = rhs.m[3];
  
  return;
}
template <class T>
ostream & Array_Class<T>::operator << (ostream & out, Array_Class<T> & r)
{
  out <<"|"<< r.m[0]<<","<<r.m[1]<<","<<r.m[2]<<","<<r.m[3]<<"|\n";
  
  return out;
}
