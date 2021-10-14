#ifndef _CIRCLE_H_
#define _CIRCLE_H_

#include <iostream>
#include <cmath>

using namespace std;

class Circle
{
    private:
        double radius;

    public:
        Circle();
        ~Circle();

        void setRadius(double r);

        double getRadius();
        double getDiameter();
        double getCircumference();
        double getArea();
};

#endif  // _CIRCLE_H_

