#include <iostream>

template <typename T>
void swap(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    std::cout << "Enter the first value: ";
    int x, y;
    std::cin >> x;

    std::cout << "Enter the second value: ";
    std::cin >> y;

    std::cout << "Before swapping: x = " << x << ", y = " << y << std::endl;

    // Call the swap function
    swap(x, y);

    std::cout << "After swapping: x = " << x << ", y = " << y << std::endl;

    return 0;
}

