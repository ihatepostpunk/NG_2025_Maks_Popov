#include <iostream>

using namespace std;

int main()
{
    int userBalance = 0;
    int userBankAccount[] = {340, 243, 555, 2233, 0, 511, 25235, 51, 353, 23};
    char operation;
    bool system = true;

    cout << "\nWelcome to the bank!\n" << endl;

    while (system)
    {
        cout << "\nWhat operation do you want to perform?" << endl;
        cout << "1. Show your balance\n"
                "2. Show your bank accounts\n"
                "3. Withdraw all funds from bank accounts to balance\n"
                "4. Exit\n";
        cin >> operation;

        switch (operation)
        {
        case '1':
        {
            cout << "\nYour balance: \n" << userBalance << endl;
            break;
        }
        case '2':
        {
            int size = sizeof(userBankAccount) / sizeof(userBankAccount[0]);
            for (int row = 0; row < size; ++row)
            {
                cout << row + 1 << ": " << userBankAccount[row] << " " << endl;
            }

            cout << "\nSelect which account you want to use: \n";
            int userCount = 0;
            cin >> userCount;

            cout << "\nWhat do you want to do with it?\n"
                    "1. Top up\n"
                    "2. Withdraw\n";
            char userCount1;
            cin >> userCount1;

            if (userCount1 == '1')
            {
                int numberTopup = 0;
                cout << "\nHow much would you like to top up this account with?  \n";
                cin >> numberTopup;

                if (userBalance < numberTopup)
                {
                    cout << "\nNot enough money in your balance!\n" << endl;
                }
                else
                {
                    userBalance -= numberTopup;
                    userBankAccount[userCount - 1] += numberTopup;
                    cout << "\nNew account balance: \n" << userBankAccount[userCount - 1] << endl;
                    cout << "\nYour balance: \n" << userBalance << endl;
                }
            }
            else if (userCount1 == '2')
            {
                int withdrawAmount = 0;
                cout << "\nHow much would you like to withdraw? \n";
                cin >> withdrawAmount;

                if (withdrawAmount > userBankAccount[userCount - 1])
                {
                    cout << "\nNot enough funds on the account!\n" << endl;
                }
                else
                {
                    userBankAccount[userCount - 1] -= withdrawAmount;
                    userBalance += withdrawAmount;
                    cout << "\nNew account balance: \n" << userBankAccount[userCount - 1] << endl;
                    cout << "\nYour balance: \n" << userBalance << endl;
                }
            }
            else
            {
                cout << "\nUnknown command!\n" << endl;
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

            cout << "\nYou have withdrawn all funds from all accounts.\n" << endl;
            cout << "\nTotal transferred: \n" << totalAccounts << endl;
            cout << "\nYour new balance: \n" << userBalance << endl;
            break;
        }
        case '4':
            system = false;
            break;
        default:
            cout << "\nUnknown command!\n" << endl;
            break;
        }
    }

    return 0;
}
