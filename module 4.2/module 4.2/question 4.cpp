#include <iostream>


class Circle {
	double PI=3.14;
private:
    double radius;

public:
    Circle() : radius(0) {}

    void setRadius(double r) {
        if (r >= 0) {
            radius = r;
        } else {
            std::cerr << "Radius cannot be negative. Setting radius to 0." << std::endl;
            radius = 0;
        }
    }

    double area() const {
        return PI * radius * radius;
    }

    double circumference() const {
        return 2 * PI * radius;
    }

    double getRadius() const {
        return radius;
    }
};

int main() { 

    Circle circle;
    double r;

    std::cout << "Enter the radius of the circle: ";
    std::cin >> r;

    circle.setRadius(r);

    std::cout << "Radius: " << circle.getRadius() << std::endl;
    std::cout << "Area: " << circle.area() << std::endl;
    std::cout << "Circumference: " << circle.circumference() << std::endl;

    return 0;
}

