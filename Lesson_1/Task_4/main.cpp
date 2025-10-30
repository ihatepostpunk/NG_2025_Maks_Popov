#include <iostream>

using namespace std;

int main()
{
    cout << "Enter the number: " << endl;
    int userNumber = 0;
    cin >> userNumber;

    for (int i = 0; i < userNumber; ++i)
    {
        for (int b = 0; b < userNumber; ++b)
        {
            cout << "*";
        }
        cout << endl;
    }

    cout << "Enter the number: " << endl;
    cin >> userNumber;

    for (int i = 0; i < userNumber; ++i)
    {
        for (int b = 0; b <= i; ++b)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
