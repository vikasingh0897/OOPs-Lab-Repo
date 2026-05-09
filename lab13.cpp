#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
// Banc Account Class
class BankAccount {
private:
    string accountHolder;
    int accountNumber;
    double balance;

public:
    BankAccount(string name, int accNum, double initialDeposit) {
        accountHolder = name;
        accountNumber = accNum;
        balance = initialDeposit;
        cout << "\nAccount created successfully for " << accountHolder << endl;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Successfully deposited: $" << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient balance! Current balance: $" << balance << endl;
        } else if (amount <= 0) {
            cout << "Invalid withdrawal amount!" << endl;
        } else {
            balance -= amount;
            cout << "Successfully withdrawn: $" << amount << endl;
        }
    }

    void displayBalance() {
        cout << fixed << setprecision(2);
        cout << "\n--- Account Details ---" << endl;
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Current Balance: $" << balance << endl;
    }
};
// Main Function
int main() {
    string name;
    int accNum;
    double amount;
    int choice;

    cout << "--- Welcome to the Bank Management System ---" << endl;
    cout << "Enter Account Holder Name: ";
    getline(cin, name);
    cout << "Enter Account Number: ";
    cin >> accNum;
    cout << "Enter Initial Deposit: ";
    cin >> amount;

    BankAccount myAccount(name, accNum, amount);

    do {
        cout << "\n1. Deposit Money" << endl;
        cout << "2. Withdraw Money" << endl;
        cout << "3. Check Balance" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                myAccount.deposit(amount);
                break;
            case 2:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                myAccount.withdraw(amount);
                break;
            case 3:
                myAccount.displayBalance();
                break;
            case 4:
                cout << "Thank you for using our banking services!" << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}