#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "2D_shape.h"
#include <iostream>
#include<string>



using namespace std;


class Triangle:public 2D_shape
{
    public:
        Triangle(int base,int height);
        void display_area();
        virtual ~Triangle();

    protected:
            int base;
            int height;
    private:
};

#endif // TRIANGLE_H
