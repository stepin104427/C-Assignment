#include "point.h"
#include<iostream>


  Point::Point():m_x(0),m_y(0)
  {

  }
  Point::Point(int x,int y):m_x(x),m_y(y)
  {

  }
  Point::Point(const Point& ref):m_x(ref.m_x),m_y(ref.m_y)
  {

  }
  
  Quadrant Point::quadrant() const
  {
      if(m_x>0 && m_y>0)
      {
          return Q1;
      }
      if(m_x<0 && m_y>0)
      {
          return Q2;
      }
      if(m_x<0 && m_y<0)
      {
          return Q3;
      }
      if(m_x>0 && m_y<0)
      {
          return Q4;
      }
  }
  bool Point::isOrigin() const
  {
      return (m_x==0 && m_y == 0);
  }
  bool Point::isOnXAxis() const
  {
      return (m_x==0 && m_y != 0);
  }
  
  bool Point::isOnYAxis() const
  {
      return (m_x!= 0 && m_y == 0);
  }
  void Point::display() const
  {
      std::cout<< "Program done";

  }


