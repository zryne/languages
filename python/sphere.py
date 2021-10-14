import math
from circle import Circle

class Sphere(Circle):
    def __init__(self):
        super().__init__()

    def set_radius(self, radius):
        super().set_radius(radius)

    def get_radius(self):
        return super().get_radius()

    def get_diameter(self):
        return super().get_diameter()

    def get_circumference(self):
        return super().get_circumference()

    def get_area(self):
        return 4 * super().get_area()

    def get_volume(self):
        return 4/3 * math.pi * math.pow(self.radius, 3)

