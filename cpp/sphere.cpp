#include "sphere.h"

Sphere::Sphere()
{
}

Sphere::~Sphere()
{
}

void Sphere::setRadius(float r)
{
    radius = r;
}

float Sphere::getRadius()
{
    return radius;
}

float Sphere::getDiameter()
{
    return (2 * radius);
}

float Sphere::getCircumference()
{
    return (2 * M_PI * radius);
}

float Sphere::getArea()
{
    return (M_PI * pow(radius, 2));
}

float Sphere::getVolume()
{
    return (4.0/3.0 * M_PI * pow(radius, 3.0));
}

