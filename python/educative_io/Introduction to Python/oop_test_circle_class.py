class Circle:
    PI = 3.14
    def __init__(self, radius):
        self.radius = radius

    def print_area(self):
        print(self.PI * (self.radius ** 2)) 


circle = Circle(3)

print(circle.print_area())
