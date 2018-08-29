#ifndef 2D_SHAPE_H
#define 2D_SHAPE_H
#include"Shape.h"


class 2D_shape:public Shape
{
    public:
        2D_shape();
        void display_2d();
        virtual ~2D_shape();

    protected:
        int area;

    private:
};

#endif // 2D_SHAPE_H
