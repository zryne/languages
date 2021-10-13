#include "ball.h"

Ball::Ball()
{
    cout << "[Create BALL]" << endl;
}

Ball::Ball(float r)
{
    radius = r;
}

Ball::~Ball()
{
    cout << "[Destroy BALL]" << endl;
}

void Ball::setRadius(float r)
{
    cout << "--> Setting radius for BALL" << endl;
    radius = r;
}

void Ball::setWeight(float w)
{
    weight = w;
}

float Ball::getRadius()
{
    return radius;
}

float Ball::getDiameter()
{
    return (2 * radius);
}

float Ball::getCircumference()
{
    return (2 * M_PI * radius);
}

float Ball::getArea()
{
    return (M_PI * pow(radius, 2));
}

float Ball::getVolume()
{
    return (4.0/3.0 * M_PI * pow(radius, 3.0));
}

float Ball::getWeight()
{
    return weight;
}

