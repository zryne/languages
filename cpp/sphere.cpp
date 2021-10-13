#include "sphere.h"

Sphere::Sphere()
{
    cout << "[Create SPHERE]" << endl;
}

Sphere::Sphere(float r)
{
    radius = r;
}

Sphere::~Sphere()
{
    cout << "[Destroy SPHERE]" << endl;
}

void Sphere::setRadius(float r)
{
    cout << "--> Setting radius for SPHERE" << endl;
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

