#include <iostream>
#include <string>

class Person {
private:
    std::string name;
    int age;
    std::string country;

public:
    
    Person() : name(""), age(0), country("") {}

    void setName(const std::string &n) {
        name = n;
    }

    std::string getName() const {
        return name;
    }

    void setAge(int a) {
        if (a >= 0) {
            age = a;
        } else {
            std::cerr << "Age cannot be negative. Setting age to 0." << std::endl;
            age = 0;
        }
    }

    int getAge() const {
        return age;
    }

    void setCountry(const std::string &c) {
        country = c;
    }

    std::string getCountry() const {
        return country;
    }
};

int main() {
    Person person;
    std::string name;
    int age;
    std::string country;

    std::cout << "Enter name: ";
    std::getline(std::cin, name);
    person.setName(name);

    std::cout << "Enter age: ";
    std::cin >> age;
    person.setAge(age);
    std::cin.ignore();
    std::cout << "Enter country: ";
    std::getline(std::cin, country);
    person.setCountry(country);

    std::cout << "\nPerson details:" << std::endl;
    std::cout << "Name: " << person.getName() << std::endl;
    std::cout << "Age: " << person.getAge() << std::endl;
    std::cout << "Country: " << person.getCountry() << std::endl;

    return 0;
}

