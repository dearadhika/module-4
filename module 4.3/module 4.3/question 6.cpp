#include <iostream>
#include <string>

class Employee {
private:
    std::string name;
    int employeeID;
    double salary;

public:
    
    Employee(const std::string &empName, int empID, double initialSalary) {
        name = empName;
        employeeID = empID;
        salary = (initialSalary >= 0) ? initialSalary : 0;
    }

    void setSalary(double performanceFactor) {
        if (performanceFactor > 0) {
            salary *= performanceFactor;
            std::cout << "Salary updated based on performance factor: " << performanceFactor << std::endl;
        } else {
            std::cout << "Performance factor must be positive." << std::endl;
        }
    }

    std::string getName() const {
        return name;
    }

    int getEmployeeID() const {
        return employeeID;
    }

    double getSalary() const {
        return salary;
    }
};

int main() {
    std::string empName;
    int empID;
    double initialSalary;
    double performanceFactor;

    std::cout << "Enter employee name: ";
    std::getline(std::cin, empName);
    std::cout << "Enter employee ID: ";
    std::cin >> empID;
    std::cout << "Enter initial salary: ";
    std::cin >> initialSalary;

    Employee employee(empName, empID, initialSalary);

    std::cout << "\nEmployee Name: " << employee.getName() << std::endl;
    std::cout << "Employee ID: " << employee.getEmployeeID() << std::endl;
    std::cout << "Initial Salary: " << employee.getSalary() << std::endl;

    std::cout << "\nEnter performance factor to update salary: ";
    std::cin >> performanceFactor;

    employee.setSalary(performanceFactor);

    std::cout << "Updated Salary: " << employee.getSalary() << std::endl;

    return 0;
}

