#include <iostream>
#include <iomanip>
using namespace std;
// Currency Converter Class
class CurrencyConverter {
public:
    void usdToInr(double amount) {
        cout << fixed << setprecision(2);
        cout << amount << " USD = " << (amount * 83.50) << " INR" << endl;
    }

    void inrToUsd(double amount) {
        cout << fixed << setprecision(2);
        cout << amount << " INR = " << (amount / 83.50) << " USD" << endl;
    }

    void usdToEur(double amount) {
        cout << fixed << setprecision(2);
        cout << amount << " USD = " << (amount * 0.92) << " EUR" << endl;
    }

    void eurToUsd(double amount) {
        cout << fixed << setprecision(2);
        cout << amount << " EUR = " << (amount / 0.92) << " USD" << endl;
    }
};
// Main Function
int main() {
    CurrencyConverter cc;
    int choice;
    double amount;

    while (true) {
        cout << "\n--- CURRENCY CONVERTER MENU ---" << endl;
        cout << "1. USD to INR" << endl;
        cout << "2. INR to USD" << endl;
        cout << "3. USD to EUR" << endl;
        cout << "4. EUR to USD" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 5) {
            cout << "Exiting program..." << endl;
            break;
        }

        if (choice >= 1 && choice <= 4) {
            cout << "Enter amount: ";
            cin >> amount;
        }

        switch (choice) {
            case 1: cc.usdToInr(amount); break;
            case 2: cc.inrToUsd(amount); break;
            case 3: cc.usdToEur(amount); break;
            case 4: cc.eurToUsd(amount); break;
            default: cout << "Invalid choice! Please try again." << endl;
        }
    }

    return 0;
}