#include <iostream>

class Calculator {
private:
    double num1;
    double num2;

public:
    Calculator(double a, double b, char operation) {
        num1 = a;
        num2 = b;
        switch (operation) {
            case '+':
                std::cout << "Addition: " << add() << std::endl;
                break;
            case '-':
                std::cout << "Subtraction: " << subtract() << std::endl;
                break;
            case '*':
                std::cout << "Multiplication: " << multiply() << std::endl;
                break;
            case '/':
                if (num2 != 0) {
                    std::cout << "Division: " << divide() << std::endl;
                } else {
                    std::cerr << "Error: Division by zero is not allowed." << std::endl;
                }
                break;
            default:
                std::cerr << "Error: Invalid operation." << std::endl;
                break;
        }
    }

    double add() {
        return num1 + num2;
    }

    double subtract() {
        return num1 - num2;
    }

    double multiply() {
        return num1 * num2;
    }

    double divide() {
        return num1 / num2;
    }
};

int main() {
    double a, b;
    char operation;

    std::cout << "Enter first number: ";
    std::cin >> a;
    std::cout << "Enter second number: ";
    std::cin >> b;
    std::cout << "Enter operation (+, -, *, /): ";
    std::cin >> operation;

    Calculator calculator(a, b, operation);

    return 0;
}

