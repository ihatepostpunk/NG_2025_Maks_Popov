#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float userNumber1 = 0;
    float userNumber2 = 0;
    char operation;
    float result = 0;
    bool valid = true;

    cout << "Enter the first number: ";
    cin >> userNumber1;

    cout << "Enter the operation:" << endl
         << "1) +" << endl
         << "2) -" << endl
         << "3) *" << endl
         << "4) /" << endl
         << "5) Degree" << endl
         << "6) Root" << endl;

    cin >> operation;

    if (operation == '6') {
        result = sqrt(userNumber1);
    } else {
        cout << "Enter the second number: ";
        cin >> userNumber2;

        switch (operation) {
        case '1':
            result = userNumber1 + userNumber2;
            break;
        case '2':
            result = userNumber1 - userNumber2;
            break;
        case '3':
            result = userNumber1 * userNumber2;
            break;
        case '4':
            if (userNumber2 == 0) {
                cout << "Division by zero" << endl;
                valid = false;
            } else {
                result = userNumber1 / userNumber2;
            }
            break;
        case '5':
            result = pow(userNumber1, userNumber2);
            break;
        default:
            cout << "Unknown command" << endl;
            valid = false;
        }
    }

    if (valid)
        cout << "Result: " << result << endl;

    return 0;
}
