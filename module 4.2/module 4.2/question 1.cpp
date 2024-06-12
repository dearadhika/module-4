#include <iostream>
using namespace std;

class Calculator
{
    private:
        float num1, num2;

    public:
        void getNumbers()
        {
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
        }

        void add()
        {
            cout << "Result: " << num1 + num2 << endl;
        }

        void subtract()
        {
            cout << "Result: " << num1 - num2 << endl;
        }

        void multiply()
        {
            cout << "Result: " << num1 * num2 << endl;
        }

        void divide()
        {
            if (num2 == 0)
            {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            else
            {
                cout << "Result: " << num1 / num2 << endl;
            }
        }
};

int main()
{
    Calculator calc;
    int choice;

    cout << "Simple Calculator Menu:\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "5. Exit\n";

    do
    {
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                calc.getNumbers();
                calc.add();
                break;
            case 2:
                calc.getNumbers();
                calc.subtract();
                break;
            case 3:
                calc.getNumbers();
                calc.multiply();
                break;
            case 4:
                calc.getNumbers();
                calc.divide();
                break;
            case 5:
                cout << "Exiting the program..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 5);

    return 0;
}
