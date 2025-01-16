#include <iostream>
#include <cmath>

class Shape {
    public:
        double area(double radius) {
            return M_PI * radius * radius;
        }

        double area(double base, double height) {
            return base * height;
        }
};

int main() {
    Shape shape;
    double radius = 7.0;
    std::cout << "Area of Circle (radius = " << radius << "): " << shape.area(radius) << std::endl;

    double base = 5.0, height = 10.0;
    std::cout << "Area of Parallelogram (base = " << base << ", height = " << height << "): " << shape.area(base, height) << std::endl;

    return 0;
}