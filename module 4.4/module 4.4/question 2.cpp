#include <iostream>

class Shape {
protected:
    double length;
    double width;

public:
    Shape(double l, double w) : length(l), width(w) {}

    void setLength(double l) {
        length = l;
    }

    void setWidth(double w) {
        width = w;
    }

    double getLength() const {
        return length;
    }

    double getWidth() const {
        return width;
    }
};

class Rectangle : public Shape {
public:
    Rectangle(double l, double w) : Shape(l, w) {}

    double calculateArea() const {
        return length * width;
    }
};

int main() {
    double length, width;

    std::cout << "Enter the length of the rectangle: ";
    std::cin >> length;
    std::cout << "Enter the width of the rectangle: ";
    std::cin >> width;

    Rectangle rect(length, width);

    std::cout << "The area of the rectangle is: " << rect.calculateArea() << std::endl;

    return 0;
}

