#include <iostream>
using namespace std;

class Point {
private:
    double x, y, z;

    public:
        Point(double x1 = 0, double y1 = 0, double z1 = 0) : x(x1), y(y1), z(z1) {}

        Point operator+(const Point& other) const {
            return Point(x + other.x, y + other.y, z + other.z);
        }

        Point operator-(const Point& other) const {
            return Point(x - other.x, y - other.y, z - other.z);
        }

        void display() const {
            cout << "(" << x << ", " << y << ", " << z << ")" << endl;
        }
};

int main() {
    Point P1(2.5, 3.5, 4.5);
    Point P2(1.0, 5.0, 7.0);

    Point P3 = P1 + P2;
    cout << "P1 + P2 = ";
    P3.display();

    Point P4 = P1 - P2;
    cout << "P1 - P2 = ";
    P4.display();

    return 0;
}
