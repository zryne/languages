#include "ball.h"

Ball::Ball()
{
}

Ball::~Ball()
{
}

void Ball::setRadius(double r)
{
    radius = r;
}

double Ball::getRadius()
{
    return radius;
}

double Ball::getWeight()
{
    return weight;
}

double Ball::getDiameter()
{
    return (2 * radius);
}

double Ball::getCircumference()
{
    return (2 * M_PI * radius);
}

double Ball::getArea()
{
    return (M_PI * pow(radius, 2));
}

double Ball::getVolume()
{
    return (4.0/3.0 * M_PI * pow(radius, 3.0));
}

void Ball::setWeight(double w)
{
    weight = w;
}

