#include "circle.h"

Circle::Circle()
{
    cout << "[Create CICLE]" << endl;
}

Circle::Circle(float r)
{
    radius = r;
}

Circle::~Circle()
{
    cout << "[Destroy CICLE]" << endl;
}

void Circle::setRadius(float r)
{
    cout << "--> Setting radius for CIRCLE" << endl;
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

