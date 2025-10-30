#include <iostream>

using namespace std;

int main()
{
    int userBalance = 500;
    int userBankAccount[] = {340, 243, 555, 2233, 0, 511, 25235, 51, 353, 23};
    char operation;
    bool system = true;

    cout << "Welcome to the bank!" << endl;

    while (system)
    {
        cout << "What operation do you want to perform?" << endl;
        cout << "1. Show your balance\n"
                "2. Show your bank accounts\n"
                "3. Withdraw all funds from bank accounts to balance\n"
                "4. Exit\n";
        cin >> operation;

        switch (operation)
        {
        case '1':
        {
            cout << endl;
            cout << "Your balance: " << userBalance << endl;
            cout << endl;
            break;
        }
        case '2':
        {
            int size = sizeof(userBankAccount) / sizeof(userBankAccount[0]);
            for (int i = 0; i < size; ++i)
            {
                cout << i + 1 << ": " << userBankAccount[i] << " " << endl;
            }

            cout << endl;
            cout << "\nSelect which account you want to use: ";
            cout << endl;
            int userCount = 0;
            cin >> userCount;

            cout << endl;
            cout << "What do you want to do with it?\n"
                    "1. Top up\n"
                    "2. Withdraw\n";
            cout << endl;
            char userCount1;
            cin >> userCount1;

            if (userCount1 == '1')
            {
                int numberTopup = 0;
                cout << endl;
                cout << "How much would you like to top up this account with? ";
                cout << endl;
                cin >> numberTopup;

                if (userBalance < numberTopup)
                {
                    cout << endl;
                    cout << "Not enough money in your balance!" << endl;
                    cout << endl;
                }
                else
                {
                    userBalance -= numberTopup;
                    userBankAccount[userCount - 1] += numberTopup;
                    cout << endl;
                    cout << "New account balance: " << userBankAccount[userCount - 1] << endl;
                    cout << endl;
                    cout << "Your balance: " << userBalance << endl;
                    cout << endl;
                }
            }
            else if (userCount1 == '2')
            {
                int withdrawAmount = 0;
                cout << "How much would you like to withdraw? ";
                cin >> withdrawAmount;

                if (withdrawAmount > userBankAccount[userCount - 1])
                {
                    cout << endl;
                    cout << "Not enough funds on the account!" << endl;
                    cout << endl;
                }
                else
                {
                    userBankAccount[userCount - 1] -= withdrawAmount;
                    userBalance += withdrawAmount;
                    cout << endl;
                    cout << "New account balance: " << userBankAccount[userCount - 1] << endl;
                    cout << endl;
                    cout << "Your balance: " << userBalance << endl;
                    cout << endl;
                }
            }
            else
            {
                cout << "Unknown command!" << endl;
            }

            break;
        }
        case '3':
        {
            int size = sizeof(userBankAccount) / sizeof(userBankAccount[0]);
            int totalAccounts = 0;

            for (int i = 0; i < size; ++i)
            {
                totalAccounts += userBankAccount[i];
                userBankAccount[i] = 0;
            }

            userBalance += totalAccounts;

            cout << endl;
            cout << "You have withdrawn all funds from all accounts." << endl;
            cout << "Total transferred: " << totalAccounts << endl;
            cout << endl;
            cout << "Your new balance: " << userBalance << endl;
            cout << endl;
            break;
        }
        case '4':
            system = false;
            break;
        default:
            cout << endl;
            cout << "Unknown command!" << endl;
            break;
        }
    }

    return 0;
}
