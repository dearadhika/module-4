#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    Number(int v) : value(v) {}

    friend void swap(Number& num1, Number& num2);

    void display() const {
        cout << value << endl;
    }
};

void swap(Number& num1, Number& num2) {
    num1.value = num1.value + num2.value;
    num2.value = num1.value - num2.value;
    num1.value = num1.value - num2.value;
}

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    Number num1(a);
    Number num2(b);

    cout << "Before swapping:" << endl;
    cout << "num1 = ";
    num1.display();
    cout << "num2 = ";
    num2.display();

    swap(num1, num2);

    cout << "After swapping:" << endl;
    cout << "num1 = ";
    num1.display();
    cout << "num2 = ";
    num2.display();

    return 0;
}

