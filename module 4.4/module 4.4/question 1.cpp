#include <iostream>
#include <string>

class Cricketer {
protected:
    std::string name;
    int age;
    std::string country;

public:
    void inputData() {
        std::cout << "Enter name: ";
        std::cin >> name;
        std::cout << "Enter age: ";
        std::cin >> age;
        std::cout << "Enter country: ";
        std::cin >> country;
    }

    void displayData() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
        std::cout << "Country: " << country << std::endl;
    }
};

class Batsman : public Cricketer {
private:
    int totalRuns;
    float averageRuns;
    std::string bestPerformance;

public:
    void inputData() {
        Cricketer::inputData(); 
        std::cout << "Enter total runs: ";
        std::cin >> totalRuns;
        std::cout << "Enter best performance: ";
        std::cin >> bestPerformance;
    }

    void calculateAverageRuns() {
        averageRuns = (float)totalRuns / 10; 
    }

    void displayData() {
        Cricketer::displayData();
        std::cout << "Total runs: " << totalRuns << std::endl;
        std::cout << "Average runs: " << averageRuns << std::endl;
        std::cout << "Best performance: " << bestPerformance << std::endl;
    }
};

int main() {
    Batsman batsman;
    batsman.inputData();
    batsman.calculateAverageRuns();
    batsman.displayData();
    return 0;
}
