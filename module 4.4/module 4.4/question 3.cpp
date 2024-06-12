#include <iostream>
#include <string>

using namespace std;

class Person {
protected:
    string name;
    int age;
public:
    void inputData() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void displayData() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
private:
    float percentage;
public:
    void inputData() {
        Person::inputData();
        cout << "Enter percentage: ";
        cin >> percentage;
    }

    void displayData() {
        Person::displayData();
        cout << "Percentage: " << percentage << endl;
    }
};

class Teacher : public Person {
private:
    float salary;
public:
    void inputData() {
        Person::inputData();
        cout << "Enter salary: ";
        cin >> salary;
    }

    void displayData() {
        Person::displayData();
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Student s;
    cout << "Enter student data:" << endl;
    s.inputData();
    cout << "Student data:" << endl;
    s.displayData();

    Teacher t;
    cout << "Enter teacher data:" << endl;
    t.inputData();
    cout << "Teacher data:" << endl;
    t.displayData();

    return 0;
}
