#ifndef 3D_SHAPE_H
#define 3D_SHAPE_H
#include "2D_shape.h"


class 3D_shape : public Shape
{
    public:
        3D_shape();
         void display_3d();
        virtual ~3D_shape();

    protected:
        int volume;
    private:
};

#endif // 3D_SHAPE_H
