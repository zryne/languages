#include "ball.h"

Ball::Ball()
{
}

Ball::~Ball()
{
}

void Ball::setRadius(float r)
{
    radius = r;
}

float Ball::getRadius()
{
    return radius;
}

float Ball::getWeight()
{
    return weight;
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

void Ball::setWeight(float w)
{
    weight = w;
}

