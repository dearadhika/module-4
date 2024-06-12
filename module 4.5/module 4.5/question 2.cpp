#include <iostream>

template<typename T>
void swap(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

template<typename T>
void selectionSort(T arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < size; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            swap(arr[i], arr[minIndex]);
        }
    }
}

template<typename T>
void printArray(T arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int size;
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    int intArray[size];
    double doubleArray[size];

    std::cout << "Enter " << size << " integer(s): ";
    for (int i = 0; i < size; ++i) {
        std::cin >> intArray[i];
    }

    std::cout << "Enter " << size << " double(s): ";
    for (int i = 0; i < size; ++i) {
        std::cin >> doubleArray[i];
    }

    std::cout << "Before sorting:" << std::endl;
    std::cout << "Integer array: ";
    printArray(intArray, size);
    std::cout << "Double array: ";
    printArray(doubleArray, size);

    selectionSort(intArray, size);
    selectionSort(doubleArray, size);

    std::cout << "After sorting:" << std::endl;
    std::cout << "Integer array: ";
    printArray(intArray, size);
    std::cout << "Double array: ";
    printArray(doubleArray, size);

    return 0;
}



