import math
from sphere import Sphere

class Ball(Sphere):
    def __init__(self):
        super().__init__()
        self.weight = 0

    def set_radius(self, radius):
        super().set_radius(radius)

    def set_weight(self, weight):
        self.weight = weight

    def get_radius(self):
        return super().get_radius()

    def get_diameter(self):
        return super().get_diameter()

    def get_circumference(self):
        return super().get_circumference()

    def get_area(self):
        return super().get_area()

    def get_volume(self):
        return super().get_volume()

    def get_weight(self):
        return self.weight

