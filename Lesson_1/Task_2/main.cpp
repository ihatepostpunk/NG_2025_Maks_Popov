#include <iostream>
#include <cmath>
using namespace std;

void showResult(float result) {
    cout << "Result: " << result << endl;
}

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
        showResult(sqrt(userNumber1));
    } else {
        cout << "Enter the second number: ";
        cin >> userNumber2;

        switch (operation) {
        case '1':
            showResult(userNumber1 + userNumber2);
            break;
        case '2':
            showResult(userNumber1 - userNumber2);
            break;
        case '3':
            showResult(userNumber1 * userNumber2);
            break;
        case '4':
            if (userNumber2 == 0)
                cout << "Division by zero" << endl;
            else
                showResult(userNumber1 / userNumber2);
            break;
        case '5':
            showResult(pow(userNumber1, userNumber2));
            break;
        default:
            cout << "Unknown command" << endl;
        }
    }

    return 0;
}
