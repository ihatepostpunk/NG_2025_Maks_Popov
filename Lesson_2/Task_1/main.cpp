#include <iostream>

using namespace std;

int main()
{
    int userBalance = 0;
    int userBankAccount[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    char operation;
    bool system = true;

    cout << endl << "Welcome to the bank!" << endl;

    while (system)
    {
        cout << endl
             << "What operation do you want to perform?" << endl
             << "1. Show your balance" << endl
             << "2. Show your bank accounts" << endl
             << "3. Withdraw all funds from bank accounts to balance" << endl
             << "4. Exit" << endl;
        cin >> operation;

        switch (operation)
        {
        case '1':
            cout << endl << "Your balance: " << endl << userBalance << endl;
            break;

        case '2':
        {
            int size = sizeof(userBankAccount) / sizeof(userBankAccount[0]);
            for (int row = 0; row < size; ++row)
            {
                cout << row + 1 << ": " << userBankAccount[row] << endl;
            }

            cout << endl << "Select which account you want to use: " << endl;
            int userCount = 0;
            cin >> userCount;

            cout << endl << "What do you want to do with it?" << endl
                 << "1. Top up" << endl
                 << "2. Withdraw" << endl;

            char userCount1;
            cin >> userCount1;

            if (userCount1 == '1')
            {
                int numberTopup = 0;
                cout << endl << "How much would you like to top up this account with?" << endl;
                cin >> numberTopup;

                if (userBalance < numberTopup)
                {
                    cout << endl << "Not enough money in your balance!" << endl;
                }
                else
                {
                    userBalance -= numberTopup;
                    userBankAccount[userCount - 1] += numberTopup;
                    cout << endl << "New account balance: " << endl
                         << userBankAccount[userCount - 1] << endl;
                    cout << "Your balance: " << endl << userBalance << endl;
                }
            }
            else if (userCount1 == '2')
            {
                int withdrawAmount = 0;
                cout << endl << "How much would you like to withdraw?" << endl;
                cin >> withdrawAmount;

                if (withdrawAmount > userBankAccount[userCount - 1])
                {
                    cout << endl << "Not enough funds on the account!" << endl;
                }
                else
                {
                    userBankAccount[userCount - 1] -= withdrawAmount;
                    userBalance += withdrawAmount;
                    cout << endl << "New account balance: " << endl
                         << userBankAccount[userCount - 1] << endl;
                    cout << "Your balance: " << endl << userBalance << endl;
                }
            }
            else
            {
                cout << endl << "Unknown command!" << endl;
            }

            break;
        }

        case '3':
        {
            int size = sizeof(userBankAccount) / sizeof(userBankAccount[0]);
            int totalAccounts = 0;

            for (int row = 0; row < size; ++row)
            {
                totalAccounts += userBankAccount[row];
                userBankAccount[row] = 0;
            }

            userBalance += totalAccounts;

            cout << endl
                 << "You have withdrawn all funds from all accounts." << endl
                 << "Total transferred: " << totalAccounts << endl
                 << "Your new balance: " << userBalance << endl;
            break;
        }

        case '4':
            system = false;
            break;

        default:
            cout << endl << "Unknown command!" << endl;
            break;
        }
    }

    return 0;
}
