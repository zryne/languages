
#include "ball.h"

int main()
{
    cout << "-----------------------------------" << endl;

    Circle * c = new Circle();
    c->setRadius(2.5);
    cout << "Circle:" << endl;
    cout << "\tRadius = " << c->getRadius() << endl;
    cout << "\tDiameter = " << c->getDiameter() << endl;
    cout << "\tCircumference = " << c->getCircumference() << endl;
    cout << "\tArea = " << c->getArea() << endl;
    delete c;

    cout << "-----------------------------------" << endl;

    Sphere * s = new Sphere();
    s->setRadius(4.1);
    cout << "Sphere:" << endl;
    cout << "\tRadius = " << s->getRadius() << endl;
    cout << "\tDiameter = " << s->getDiameter() << endl;
    cout << "\tCircumference = " << s->getCircumference() << endl;
    cout << "\tArea = " << s->getArea() << endl;
    cout << "\tVolume = " << s->getVolume() << endl;
    delete s;

    cout << "-----------------------------------" << endl;

    Ball * b = new Ball();
    b->setRadius(5.5);
    b->setWeight(3.0);
    cout << "Ball:" << endl;
    cout << "\tRadius = " << b->getRadius() << endl;
    cout << "\tDiameter = " << b->getDiameter() << endl;
    cout << "\tCircumference = " << b->getCircumference() << endl;
    cout << "\tArea = " << b->getArea() << endl;
    cout << "\tVolume = " << b->getVolume() << endl;
    cout << "\tWeight = " << b->getWeight() << endl;
    delete b;

    cout << "-----------------------------------" << endl;

    return 0;
}
