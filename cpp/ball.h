#ifndef _BALL_H_
#define _BALL_H_

#include "sphere.h"

class Ball : public Sphere
{
    private:
        float radius;
        float weight;

    public:
        Ball();
        ~Ball();

        void setRadius(float r);
        void setWeight(float w);

        float getRadius();
        float getDiameter();
        float getCircumference();
        float getArea();
        float getVolume();
        float getWeight();
};

#endif  // _BALL_H_
