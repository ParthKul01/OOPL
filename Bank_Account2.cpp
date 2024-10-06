#include<iostream>
using namespace std;

class Bank {
    string name;
    long long account;
    int w_amount;
    int balance;

public:
    Bank() {
        name = "";
        account = 0;
        w_amount = 0;
        balance = 0;
    }

    void enter() {
        cout << "Enter your name: " << endl;
        cin.ignore();  // To clear the input buffer
        getline(cin, name);
        cout << "Enter the account number: " << endl;
        cin >> account;
    }

    void deposit() {
        int deposit_amount;
        cout << "Enter amount to Deposit: " << endl;
        cin >> deposit_amount;
        balance += deposit_amount;  // Add the deposit amount to the balance
    }

    void check() {
        cout << "Balance is: " << balance << endl;
    }

    void withdraw() {
        if (balance == 0) {
            cout << "Account is Empty" << endl;
        } else {
            cout << "Enter the amount to be withdrawn: " << endl;
            cin >> w_amount;
            if (w_amount > balance) {
                cout << "Insufficient balance!" << endl;
            } else {
                balance -= w_amount;
            }
        }
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Account Number: " << account << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    Bank b;
    char c;
    int ch;
    do {
        cout << " 1. Enter Details \n 2. Deposit \n 3. Check Balance \n 4. Withdraw \n 5. Display ";
        cout << "\nEnter your choice: " << endl;
        cin >> ch;
        switch (ch) {
            case 1:
                b.enter();
                break;
            case 2:
                b.deposit();
                break;
            case 3:
                b.check();
                break;
            case 4:
                b.withdraw();
                break;
            case 5:
                b.display();
                break;
            default:
                cout << "Invalid choice" << endl;
                break;
        }

        cout << "Do you want to continue? (y/n) " << endl;
        cin >> c;

    } while (c == 'y');

    return 0;
}

