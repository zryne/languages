#include "circle.h"

Circle::Circle()
{
    radius = 0;
}

Circle::~Circle()
{
}

void Circle::setRadius(double r)
{
    radius = r;
}

double Circle::getRadius()
{
    return radius;
}

double Circle::getDiameter()
{
    return (2 * radius);
}

double Circle::getCircumference()
{
    return (2 * M_PI * radius);
}

double Circle::getArea()
{
    return (M_PI * pow(radius, 2));
}

