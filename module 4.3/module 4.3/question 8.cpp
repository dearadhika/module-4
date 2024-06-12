#include <iostream>
#include <string>

class Address {
private:
    std::string street;
    std::string city;
    std::string state;
    std::string postalCode;

public:
    Address(const std::string &street, const std::string &city, const std::string &state, const std::string &postalCode) 
        : street(street), city(city), state(state), postalCode(postalCode) {}

    void displayAddress() const {
        std::cout << "Address: " << street << ", " << city << ", " << state << ", " << postalCode << std::endl;
    }
};

class Student {
private:
    std::string name;
    std::string studentClass;
    int rollNumber;
    double marks;
    Address address;

public:
    Student(const std::string &name, const std::string &studentClass, int rollNumber, double marks, const Address &address) 
        : name(name), studentClass(studentClass), rollNumber(rollNumber), marks(marks), address(address) {}

    char calculateGrade() const {
        if (marks >= 90) return 'A';
        if (marks >= 80) return 'B';
        if (marks >= 70) return 'C';
        if (marks >= 60) return 'D';
        return 'F';
    }

    void displayStudentInfo() const {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Class: " << studentClass << std::endl;
        std::cout << "Roll Number: " << rollNumber << std::endl;
        std::cout << "Marks: " << marks << std::endl;
        std::cout << "Grade: " << calculateGrade() << std::endl;
        address.displayAddress();
    }
};

int main() {
    std::string name, studentClass, street, city, state, postalCode;
    int rollNumber;
    double marks;

    std::cout << "Enter student's name: ";
    std::getline(std::cin, name);
    std::cout << "Enter student's class: ";
    std::getline(std::cin, studentClass);
    std::cout << "Enter roll number: ";
    std::cin >> rollNumber;
    std::cout << "Enter marks: ";
    std::cin >> marks;
    std::cin.ignore();  
    std::cout << "Enter street: ";
    std::getline(std::cin, street);
    std::cout << "Enter city: ";
    std::getline(std::cin, city);
    std::cout << "Enter state: ";
    std::getline(std::cin, state);
    std::cout << "Enter postal code: ";
    std::getline(std::cin, postalCode);

    Address address(street, city, state, postalCode);
    Student student(name, studentClass, rollNumber, marks, address);

    std::cout << "\nStudent Information:\n";
    student.displayStudentInfo();

    return 0;
}

