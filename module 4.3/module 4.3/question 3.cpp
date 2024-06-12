#include <iostream>
#include <string>

class Car {
private:
    std::string company;
    std::string model;
    int year;

public:
    
    Car(std::string c, std::string m, int y) : company(c), model(m), year(y) {}
    std::string getCompany() { return company; }
    std::string getModel() { return model; }
    int getYear() { return year; }

    
    void setCompany(std::string c) { company = c; }
    void setModel(std::string m) { model = m; }
    void setYear(int y) { year = y; }
};

int main() {
    Car car("Tesla", "Model S", 2020);

    std::cout << "Company: " << car.getCompany() << std::endl;
    std::cout << "Model: " << car.getModel() << std::endl;
    std::cout << "Year: " << car.getYear() << std::endl;

    car.setCompany("Ford");
    car.setModel("Mustang");
    car.setYear(1969);

    std::cout << "\nUpdated Company: " << car.getCompany() << std::endl;
    std::cout << "Updated Model: " << car.getModel() << std::endl;
    std::cout << "Updated Year: " << car.getYear() << std::endl;

    return 0;
}
