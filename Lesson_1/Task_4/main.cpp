#include <iostream>

using namespace std;

int main()
{
    cout << "Enter the number: " << endl;
    int userNumber = 0;
    cin >> userNumber;

    for (int row = 0; row < userNumber; ++row)
    {
        for (int col = 0; col < userNumber; ++col)
        {
            cout << "*";
        }
        cout << endl;
    }

    cout << "Enter the number: " << endl;
    cin >> userNumber;

    for (int row = 0; row < userNumber; ++row)
    {
        for (int col = 0; col <= row; ++col)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
