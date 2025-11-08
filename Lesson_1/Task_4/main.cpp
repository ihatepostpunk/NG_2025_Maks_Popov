#include <iostream>

using namespace std;

int main() {
    int userNumber;
    char choose;

    cout << "Enter the number: ";
    cin >> userNumber;

    cout << "Choose (s = square, t = triangle): ";
    cin >> choose;

    for (int row = 0; row < userNumber; ++row) {
        for (int col = 0; col < userNumber; ++col) {
            if (choose == 's') {
                cout << "*";
            } else if (choose == 't') {
                if (col <= row)
                    cout << "*";
                else
                    cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
