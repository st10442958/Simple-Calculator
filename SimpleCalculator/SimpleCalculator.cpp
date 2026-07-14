#include <iostream>
using namespace std;

int main()
{
    int choice;
    double num1, num2, result;
    char again;
    do
    {
        cout << "\n=====================================\n";
        cout << "         SIMPLE CALCULATOR\n";
        cout << "=====================================\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Exit\n";
        cout << "=====================================\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "\nEnter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
            result = num1 + num2;
            cout << "\nResult: " << num1 << " + " << num2 << " = " << result << endl;
            break;
        case 2:
            cout << "\nEnter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
            result = num1 - num2;
            cout << "\nResult: " << num1 << " - " << num2 << " = " << result << endl;
            break;
        case 3:
            cout << "\nEnter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
            result = num1 * num2;
            cout << "\nResult: " << num1 << " * " << num2 << " = " << result << endl;
            break;
        case 4:
            cout << "\nEnter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
            if (num2 == 0)
            {
                cout << "\nError: Division by zero is not allowed." << endl;
            }
            else
            {
                result = num1 / num2;
                cout << "\nResult: " << num1 << " / " << num2 << " = " << result << endl;
            }
            break;
        case 5:
            cout << "\nThank you for using the calculator!" << endl;
            return 0;
        default:
            cout << "\nInvalid choice. Please select a number between 1 and 5." << endl;
        }
        cout << "\nWould you like to perform another calculation? (Y/N): ";
        cin >> again;
    } while (again == 'Y' || again == 'y');

    cout << "\nThank you for using the calculator!" << endl;
    return 0;
}