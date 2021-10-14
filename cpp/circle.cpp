#include "circle.h"

Circle::Circle()
{
    radius = 0;
}

Circle::~Circle()
{
}

void Circle::setRadius(float r)
{
    radius = r;
}

float Circle::getRadius()
{
    return radius;
}

float Circle::getDiameter()
{
    return (2 * radius);
}

float Circle::getCircumference()
{
    return (2 * M_PI * radius);
}

float Circle::getArea()
{
    return (M_PI * pow(radius, 2));
}

