#ifndef _CIRCLE_H_
#define _CIRCLE_H_

#include <iostream>
#include <cmath>

using namespace std;

class Circle
{
    private:
        float radius;

    public:
        Circle();
        ~Circle();

        void setRadius(float r);

        float getRadius();
        float getDiameter();
        float getCircumference();
        float getArea();
};

#endif  // _CIRCLE_H_

