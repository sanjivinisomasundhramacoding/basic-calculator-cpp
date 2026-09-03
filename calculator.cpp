#include <iostream>
#include <limits>
using namespace std;

int main() {
    int choice;
    double num1, num2;

    cout << "==============================\n";
    cout << "      BASIC CALCULATOR\n";
    cout << "==============================\n";

    while (true) {
        cout << "\n----- MENU -----\n";
        cout << "1. Addition (+)\n";
        cout << "2. Subtraction (-)\n";
        cout << "3. Multiplication (*)\n";
        cout << "4. Division (/)\n";
        cout << "5. Modulus (%)\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";

        // Validate menu input
        if (!(cin >> choice)) {
            cout << "Invalid input! Please enter a number from 1 to 6.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        if (choice == 6) {
            cout << "\nThank you for using the calculator!\n";
            break;
        }

        if (choice < 1 || choice > 6) {
            cout << "Invalid choice! Please select between 1 and 6.\n";
            continue;
        }

        // Get first number
        cout << "Enter first number: ";
        if (!(cin >> num1)) {
            cout << "Invalid input! Please enter a valid number.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        // Get second number
        cout << "Enter second number: ";
        if (!(cin >> num2)) {
            cout << "Invalid input! Please enter a valid number.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        // Perform selected operation
        switch (choice) {
            case 1:
                cout << "Result: " << num1 << " + " << num2
                     << " = " << num1 + num2 << "\n";
                break;

            case 2:
                cout << "Result: " << num1 << " - " << num2
                     << " = " << num1 - num2 << "\n";
                break;

            case 3:
                cout << "Result: " << num1 << " * " << num2
                     << " = " << num1 * num2 << "\n";
                break;

            case 4:
                if (num2 == 0) {
                    cout << "Error: Division by zero is not allowed.\n";
                } else {
                    cout << "Result: " << num1 << " / " << num2
                         << " = " << num1 / num2 << "\n";
                }
                break;

            case 5:
                if (num2 == 0) {
                    cout << "Error: Modulus by zero is not allowed.\n";
                } else {
                    int a = static_cast<int>(num1);
                    int b = static_cast<int>(num2);
                    cout << "Result: " << a << " % " << b
                         << " = " << a % b << "\n";
                }
                break;
        }
    }

    return 0;
}