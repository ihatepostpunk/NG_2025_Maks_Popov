#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float userNumber1 = 0;
    float userNumber2 = 0;
    char operation;

    cout << "Enter the first number: ";
    cin >> userNumber1;

    cout << "Enter the operation:\n"
            "1) +\n"
            "2) -\n"
            "3) *\n"
            "4) /\n"
            "5) Degree\n"
            "6) Root\n";
    cin >> operation;

    if (operation == '6') {
        cout << "Result: " << sqrt(userNumber1) << endl;
    } else {
        cout << "Enter the second number: ";
        cin >> userNumber2;

        switch (operation) {
        case '1':
            cout << "Result: " << userNumber1 + userNumber2 << endl;
            break;
        case '2':
            cout << "Result: " << userNumber1 - userNumber2 << endl;
            break;
        case '3':
            cout << "Result: " << userNumber1 * userNumber2 << endl;
            break;
        case '4':
            if (userNumber2 == 0)
                cout << "Division by zero" << endl;
            else
                cout << "Result: " << userNumber1 / userNumber2 << endl;
            break;
        case '5':
            cout << "Result: " << pow(userNumber1, userNumber2) << endl;
            break;
        default:
            cout << "Unknown command" << endl;
        }
    }

    return 0;
}
