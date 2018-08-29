#include "Triangle.h"
#include "2D_shape.h"
#include <iostream>
#include<string>

Triangle::Triangle(int base,int height)
{
    this->base=base;
    this->height=height;
}
void Triangle::display_area()
{
    area=0.5*base*height;
    cout<<"the area of triangle="<<area<<endl;
}


Triangle::~Triangle()
{
    cout<<"triangle is destroyed "<<endl;
}
