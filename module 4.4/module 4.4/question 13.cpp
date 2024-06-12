#include <iostream>

using namespace std;

class MaxFinder {
private:
    int num1, num2;

public:
    MaxFinder(int a, int b) {
        num1 = a;
        num2 = b;
    }

    friend int findMax(MaxFinder mf);
};

int findMax(MaxFinder mf) {
    return (mf.num1 > mf.num2)? mf.num1 : mf.num2;
}

int main() {
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    MaxFinder mf(num1, num2);

    cout << "Maximum number: " << findMax(mf) << endl;

    return 0;
}
