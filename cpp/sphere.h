#ifndef _SPHERE_H_
#define _SPHERE_H_

#include "circle.h"

class Sphere : public Circle
{
    private:
        double radius;

    public:
        Sphere();
        ~Sphere();

        void setRadius(double r);

        double getRadius();
        double getDiameter();
        double getCircumference();
        double getArea();
        double getVolume();
};

#endif  // _SPHERE_H_
