#include <iostream>
#include <string>
using namespace std;

class Student {
protected:
    int rollNo;
    string name;

public:
    void getStudentDetails() {
        cout << "Enter Roll Number: ";
        cin >> rollNo;
        cout << "Enter Name: ";
        cin.ignore(); 
        getline(cin, name);
    }

    void displayStudentDetails() {
        cout << "Roll Number: " << rollNo << endl;
        cout << "Name: " << name << endl;
    }
};

class Exam {
protected:
    int marks[5]; 

public:
    void getMarks() {
        for (int i = 0; i < 5; ++i) {
            cout << "Enter marks for subject " << (i + 1) << ": ";
            cin >> marks[i];
        }
    }

    void displayMarks() {
        for (int i = 0; i < 5; ++i) {
            cout << "Marks for subject " << (i + 1) << ": " << marks[i] << endl;
        }
    }
};

class Result : public Student, public Exam {
public:
    void displayMarkSheet() {
        cout << "\nMark Sheet\n";
        cout << "-------------------------\n";
        displayStudentDetails();
        displayMarks();
    }
};

int main() {
    Result student;
    student.getStudentDetails();
    student.getMarks();
    student.displayMarkSheet();
    return 0;
}

