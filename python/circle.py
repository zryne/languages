import math

class Circle:
    def __init__(self):
        self.radius = 0

    def set_radius(self, radius):
        self.radius = radius

    def get_radius(self):
        return self.radius

    def get_diameter(self):
        return 2 * self.radius

    def get_circumference(self):
        return 2 * math.pi * self.radius

    def get_area(self):
        return math.pi * math.pow(self.radius, 2)

