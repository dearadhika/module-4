#include <iostream>

using namespace std;

class Student {
protected:
    int rollNumber;
public:
    void inputData() {
        cout << "Enter roll number: ";
        cin >> rollNumber;
    }

    void displayData() {
        cout << "Roll Number: " << rollNumber << endl;
    }
};

class Test : public Student {
protected:
    int marks1, marks2;
public:
    void inputData() {
        Student::inputData();
        cout << "Enter marks in subject 1: ";
        cin >> marks1;
        cout << "Enter marks in subject 2: ";
        cin >> marks2;
    }

    void displayData() {
        Student::displayData();
        cout << "Marks in subject 1: " << marks1 << endl;
        cout << "Marks in subject 2: " << marks2 << endl;
    }
};

class Result : public Test {
private:
    int totalMarks;
public:
    void calculateTotal() {
        totalMarks = marks1 + marks2;
    }

    void displayData() {
        Test::displayData();
        cout << "Total Marks: " << totalMarks << endl;
    }
};

int main() {
    Result result;
    cout << "Enter student data:" << endl;
    result.inputData();
    result.calculateTotal();
    cout << "Student result:" << endl;
    result.displayData();

    return 0;
}
