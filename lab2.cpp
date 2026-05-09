#include <iostream>
using namespace std;
// Simple Intrest Class to Implement Default Arguments
class InterestCalculator {
public:
    double calculateSI(double principal, double rate = 5.0, double time = 1.0) {
        return (principal * rate * time) / 100;
    }
};
// Main Function
int main() {
    InterestCalculator calc;
    double p, r, t;

    cout << "Enter Principal amount: ";
    cin >> p;

    cout << "\n--- Scenario 1: Default Rate (5%) and Time (1yr) ---\n";
    cout << "Interest: " << calc.calculateSI(p) << endl;

    cout << "\nEnter Rate of Interest: ";
    cin >> r;
    cout << "--- Scenario 2: Custom Rate, Default Time (1yr) ---\n";
    cout << "Interest: " << calc.calculateSI(p, r) << endl;

    cout << "\nEnter Time period (years): ";
    cin >> t;
    cout << "--- Scenario 3: Custom Principal, Rate, and Time ---\n";
    cout << "Interest: " << calc.calculateSI(p, r, t) << endl;

    return 0;
}