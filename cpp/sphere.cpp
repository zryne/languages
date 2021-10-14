#include "sphere.h"

Sphere::Sphere()
{
}

Sphere::~Sphere()
{
}

void Sphere::setRadius(double r)
{
    radius = r;
}

double Sphere::getRadius()
{
    return radius;
}

double Sphere::getDiameter()
{
    return (2 * radius);
}

double Sphere::getCircumference()
{
    return (2 * M_PI * radius);
}

double Sphere::getArea()
{
    return (M_PI * pow(radius, 2));
}

double Sphere::getVolume()
{
    return (4.0/3.0 * M_PI * pow(radius, 3.0));
}

