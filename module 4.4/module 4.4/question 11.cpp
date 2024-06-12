#include <iostream>
#include <cmath>

using namespace std;

class Area {
public:
    double pi = 3.14;

    double calculateArea(double radius) {
        return pi * radius * radius;
    }

    double calculateArea(double length, double breadth) {
        return length * breadth;
    }

    double calculateArea(double base, double height, double area) {
        return 0.5 * area * height;
    }
};

int main() {
    Area a;

    double radius, length, breadth, base, height, area;

    cout << "Enter radius of circle: ";
    cin >> radius;
    cout << "Area of circle: " << a.calculateArea(radius) << endl;

    cout << "Enter length and breadth of rectangle: ";
    cin >> length >> breadth;
    cout << "Area of rectangle: " << a.calculateArea(length, breadth) << endl;

    cout << "Enter base, height, and area of triangle: ";
    cin >> base >> height >> area;
    cout << "Area of triangle: " << a.calculateArea(base, height, area) << endl;

    return 0;
}
