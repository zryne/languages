#ifndef _BALL_H_
#define _BALL_H_

#include "sphere.h"

class Ball : public Sphere
{
    private:
        double radius;
        double weight;

    public:
        Ball();
        ~Ball();

        void setRadius(double r);
        void setWeight(double w);

        double getRadius();
        double getDiameter();
        double getCircumference();
        double getArea();
        double getVolume();
        double getWeight();
};

#endif  // _BALL_H_
