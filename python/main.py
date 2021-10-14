from circle import Circle
from sphere import Sphere
from ball import Ball

def main():
    c = Circle()
    c.set_radius(5)
    print('Circle:')
    print('   Radius = ' + str(c.get_radius()))
    print('   Diameter = ' + str(c.get_diameter()))
    print('   Circumference = ' + str(c.get_circumference()))
    print('   Area = ' + str(c.get_area()))

    s = Sphere()
    s.set_radius(5)
    print('Sphere:')
    print('   Radius = ' + str(s.get_radius()))
    print('   Diameter = ' + str(s.get_diameter()))
    print('   Circumference = ' + str(s.get_circumference()))
    print('   Area = ' + str(s.get_area()))
    print('   Volume = ' + str(s.get_volume()))

    b = Ball()
    b.set_radius(6)
    b.set_weight(5.5)
    print('Ball:')
    print('   Radius = ' + str(b.get_radius()))
    print('   Diameter = ' + str(b.get_diameter()))
    print('   Circumference = ' + str(b.get_circumference()))
    print('   Area = ' + str(b.get_area()))
    print('   Volume = ' + str(b.get_volume()))
    print('   Weight = ' + str(b.get_weight()))


if __name__=='__main__':
    main()

