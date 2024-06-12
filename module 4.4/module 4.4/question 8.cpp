#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    double add(double a, double b) {
        return a + b;
    }

    int subtract(int a, int b) {
        return a - b;
    }

    double subtract(double a, double b) {
        return a - b;
    }

    int multiply(int a, int b) {
        return a * b;
    }

    double multiply(double a, double b) {
        return a * b;
    }

    int divide(int a, int b) {
        if (b == 0) {
            cout << "Error: Division by zero" << endl;
            return 0;
        }
        return a / b;
    }

    double divide(double a, double b) {
        if (b == 0) {
            cout << "Error: Division by zero" << endl;
            return 0;
        }
        return a / b;
    }
};

int main() {
    Calculator calc;

    int int1, int2;
    double double1, double2;

    cout << "Enter two integers: ";
    cin >> int1 >> int2;

    cout << "Enter two floating point numbers: ";
    cin >> double1 >> double2;

    cout << "\nInteger Operations:" << endl;
    cout << int1 << " + " << int2 << " = " << calc.add(int1, int2) << endl;
    cout << int1 << " - " << int2 << " = " << calc.subtract(int1, int2) << endl;
    cout << int1 << " * " << int2 << " = " << calc.multiply(int1, int2) << endl;
    cout << int1 << " / " << int2 << " = " << calc.divide(int1, int2) << endl;

    cout << "\nFloating Point Operations:" << endl;
    cout << double1 << " + " << double2 << " = " << calc.add(double1, double2) << endl;
    cout << double1 << " - " << double2 << " = " << calc.subtract(double1, double2) << endl;
    cout << double1 << " * " << double2 << " = " << calc.multiply(double1, double2) << endl;
    cout << double1 << " / " << double2 << " = " << calc.divide(double1, double2) << endl;

    return 0;
}

