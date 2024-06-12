#include <iostream>
#include <string>

class BankAccount {
private:
    std::string accountNumber;
    double balance;

public:
    
    BankAccount(const std::string &accNum, double initialBalance) {
        accountNumber = accNum;
        balance = (initialBalance >= 0) ? initialBalance : 0;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            std::cout << "Deposited: " << amount << std::endl;
        } else {
            std::cout << "Deposit amount must be positive." << std::endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0) {
            if (amount <= balance) {
                balance -= amount;
                std::cout << "Withdrew: " << amount << std::endl;
            } else {
                std::cout << "Insufficient balance." << std::endl;
            }
        } else {
            std::cout << "Withdrawal amount must be positive." << std::endl;
        }
    }

    double getBalance() const {
        return balance;
    }

    std::string getAccountNumber() const {
        return accountNumber;
    }
};

int main() {
    std::string accNum;
    double initialBalance;
    double amount;
    char choice;

    std::cout << "Enter account number: ";
    std::cin >> accNum;
    std::cout << "Enter initial balance: ";
    std::cin >> initialBalance;

    BankAccount account(accNum, initialBalance);

    std::cout << "\nAccount Number: " << account.getAccountNumber() << std::endl;
    std::cout << "Initial Balance: " << account.getBalance() << std::endl;

    do {
        std::cout << "\nChoose an option (d: deposit, w: withdraw, q: quit): ";
        std::cin >> choice;

        if (choice == 'd') {
            std::cout << "Enter deposit amount: ";
            std::cin >> amount;
            account.deposit(amount);
        } else if (choice == 'w') {
            std::cout << "Enter withdrawal amount: ";
            std::cin >> amount;
            account.withdraw(amount);
        }

        std::cout << "Current Balance: " << account.getBalance() << std::endl;

    } while (choice != 'q');

    return 0;
}

