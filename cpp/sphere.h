#ifndef _SPHERE_H_
#define _SPHERE_H_

#include "circle.h"

class Sphere : public Circle
{
    private:
        float radius;

    public:
        Sphere();
        ~Sphere();

        void setRadius(float r);

        float getRadius();
        float getDiameter();
        float getCircumference();
        float getArea();
        float getVolume();
};

#endif  // _SPHERE_H_
