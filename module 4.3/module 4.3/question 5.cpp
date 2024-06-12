#include <iostream>

class Triangle {
private:
    double sideA;
    double sideB;
    double sideC;

public:
    // Constructor
    Triangle() {
        std::cout << "Enter side A: ";
        std::cin >> sideA;
        std::cout << "Enter side B: ";
        std::cin >> sideB;
        std::cout << "Enter side C: ";
        std::cin >> sideC;
    }

    // Check if the triangle is valid (sum of any two sides > third side)
    bool isValid() {
        return (sideA + sideB > sideC) && (sideA + sideC > sideB) && (sideB + sideC > sideA);
    }

    // Check if the triangle is equilateral (all sides equal)
    bool isEquilateral() {
        return sideA == sideB && sideB == sideC;
    }

    // Check if the triangle is isosceles (two sides equal)
    bool isIsosceles() {
        return (sideA == sideB) || (sideA == sideC) || (sideB == sideC);
    }

    // Check if the triangle is scalene (all sides different)
    bool isScalene() {
        return sideA != sideB && sideA != sideC && sideB != sideC;
    }

    // Print the type of triangle
    void printType() {
        if (!isValid()) {
            std::cout << "Not a valid triangle." << std::endl;
        } else if (isEquilateral()) {
            std::cout << "Equilateral triangle." << std::endl;
        } else if (isIsosceles()) {
            std::cout << "Isosceles triangle." << std::endl;
        } else {
            std::cout << "Scalene triangle." << std::endl;
        }
    }
};

int main() {
    Triangle t;

    t.printType();

    return 0;
}
