// Name: Amr Emad-Eldin, ID: 20216074
// Name: Antonios Elia Samir, ID: 20216142

#include <iostream>
using namespace std;

struct Bank {
    int acCode, z, y, x, r;
    int a;
    string acc_type, acc_currency;
    double balance;

public:
    void create_account();
    void deposit_money();
    void withdraw_money();
    void ShowAccount()
    {
        cout << " " << endl;
        cout << "Code " << acCode << endl << "Type: " << acc_type << endl << "Balance: " << balance << endl << "Currency: " << acc_currency << endl;
    }
    int Search(int a);
};

// Function to open the account
void Bank::create_account()
{
    cout << " " << endl;
    cout << "Enter your account code " << endl;
    cin >> acCode;
    cout << " " << endl;
    cout << "Please choose currency\n 1) EGP\n 2) USD" << endl;
    cin >> x;
    switch (x) {
    case 1:
        acc_currency = "EGP";
        cout << " " << endl;
        cout << "Please specify amount you want to deposit for initial balance: " << endl;
        cin >> balance;
        cout << " " << endl;
        cout << "Please specify type of account: \n"
            << " 1) Savings\n 2) Recurring deposit: " << endl;
        cin >> y;
        if (y == 1) {
            acc_type = "Savings";
            cout << " " << endl;
            cout << "You have successfully created a bank account!\n Its details as follows:" << endl;
            cout << "Currency: " << acc_currency << ", Balance: " << balance << ", Type: " << acc_type << ", Code: " << acCode << endl;
            break;
        }
        else if (y == 2) {
            acc_type = "Recurring deposit";
            cout << " " << endl;
            cout << "You have successfully created a bank account!\n Its details as follows:" << endl;
            cout << "Currency: " << acc_currency << ", Balance: " << balance << ", Type: " << acc_type << ", Code: " << acCode << endl;
            break;
        }
        else {
            cout << " " << endl;
            cout << "Error, PLease choose a valid number." << endl;
            break;
        }

    case 2:
        acc_currency = "USD";
        cout << " " << endl;
        cout << "Please specify amount you want to deposit for initial balance: " << endl;
        cin >> balance;
        cout << " " << endl;
        cout << "Please specify type of account: \n"
            << " 1) Savings\n 2) Recurring deposit: " << endl;
        cin >> r;
        if (r == 1) {
            acc_type = "Savings";
            cout << " " << endl;
            cout << "You have successfully created a bank account!\n Its details as follows:" << endl;
            cout << "Currency: " << acc_currency << ", Balance: " << balance << ", Type: " << acc_type << ", Code: " << acCode << endl;
            break;
        }
        else if (r == 2) {
            acc_type = "Recurring deposit";
            cout << " " << endl;
            cout << "You have successfully created a bank account!\n Its details as follows:" << endl;
            cout << "Currency: " << acc_currency << ", Balance: " << balance << ", Type: " << acc_type << ", Code: " << acCode << endl;
            break;
        }
        else {
            cout << " " << endl;
            cout << "\n Error, PLease choose a valid number. \n" << endl;
            break;
        }
    default:
        cout << " " << endl;
        cout << "\n Error, PLease choose a valid number. \n" << endl;
    }

}
// Function to deposit the account
void Bank::deposit_money()
{
    double Amount;
    cout << " " << endl;
    cout << "\n Enter how much money"
        << " you want to deposit: \n" << endl;
    cin >> Amount;
    balance += Amount;
    cout << " " << endl;
    cout << "\n You have successfully added your amount, your current balance is \n" << balance << endl;
}

int Bank::Search(int a)
{
    if (acCode == a) {
        ShowAccount();
        return (1);
    }
    return (0);
}


// Function to withdraw the account
void Bank::withdraw_money()
{
    double amount;
    cout << " " << endl;
    cout << "Enter how much money you want to withdraw: " << endl;
    cin >> amount;
    if (amount <= balance) {
        balance = balance - amount;
        cout << " " << endl;
        cout << "You have successfully withdrawn your amount, your current balance is " << balance << endl;
    }
    else {
        cout << " " << endl;
        cout << "You have not enough balance" << endl;
    }
}

// Driver code
int main()
{
    Bank x[10];
    Bank d;
    int found = 0, a, z, i, b;
    do {
        cout << endl << "Welcome to FCAI bank!\n Hello user, please choose an option from menu below:" << endl;
        cout << "\n 1) Show your current accounts\n 2) Create new account\n 3) Withdraw/deposit money\n 4) Exit" << endl;
        cin >> z;
        switch (z) {
        case 1:
            cout << " " << endl;
            cout << "Please enter the account's code" << endl;
            cin >> a;
            found = d.Search(a);
            if (found) {
                d.ShowAccount();
                break;
            }
            else {
                cout << " " << endl;
                cout << "There is no record for this file" << endl;
                break;
            }
        case 2:
            d.create_account();
            break;
        case 3:
            cout << " " << endl;
            cout << "Please enter the code of the account you want to withdraw from" << endl;
            cin >> a;
            found = d.Search(a);
            if (found) {
                cout << " " << endl;
                cout << "Please select if you want to deposit or to withdraw:" << endl << "1)Withdraw" << endl << "2)Deposit" << endl;
                cin >> b;
                if (b == 1) {
                    d.withdraw_money();
                    break;
                }
                else if (b == 2) {
                    d.deposit_money();
                    break;
                }
            }

            if (!found) {
                cout << " " << endl;
                cout << "There is no record for this account" << endl;
                break;
            }



            else {
                cout << " " << endl;
                cout << "Error, Please select a valid number." << endl;
            }

        case 4:
            cout << " " << endl;
            cout << "Thanks, Have a nice day" << endl;
            break;
        default:
            cout << " " << endl;
            cout << "Error, Please Enter a valid number." << endl;
        }
    } while (z < 4);
    return 0;
}