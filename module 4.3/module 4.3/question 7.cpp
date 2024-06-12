#include <iostream>

class Date {
private:
    int day;
    int month;
    int year;

public:
    void input() {
        std::cout << "Enter day: ";
        std::cin >> day;
        while (day < 1 || day > 31) {
            std::cout << "Invalid day, please re-enter: ";
            std::cin >> day;
        }

        std::cout << "Enter month: ";
        std::cin >> month;
        while (month < 1 || month > 12) {
            std::cout << "Invalid month, please re-enter: ";
            std::cin >> month;
        }

        std::cout << "Enter year: ";
        std::cin >> year;
        while (year < 1) {
            std::cout << "Invalid year, please re-enter: ";
            std::cin >> year;
        }
    }

    void setDay(int d) {
        day = d;
    }

    void setMonth(int m) {
        month = m;
    }

    void setYear(int y) {
        year = y;
    }

    int getDay() {
        return day;
    }

    int getMonth() {
        return month;
    }

    int getYear() {
        return year;
    }

    bool isValid() {
        if (month < 1 || month > 12) {
            return false;
        }

        if (day < 1 || day > 31) {
            return false;
        }

        if (month == 2) {
            if (isLeapYear(year)) {
                return day <= 29;
            } else {
                return day <= 28;
            }
        } else if (month == 4 || month == 6 || month == 9 || month == 11) {
            return day <= 30;
        }

        return true;
    }

    bool isLeapYear(int y) {
        return (y % 4 == 0 && y % 100 != 0) || y % 400 == 0;
    }

    void printDate() {
        if (isValid()) {
            std::cout << day << "/" << month << "/" << year << std::endl;
        } else {
            std::cout << "Invalid date." << std::endl;
        }
    }
};

int main() {
    Date date;
    date.input();
    date.printDate();

    return 0;
}
