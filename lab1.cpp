#include <iostream>
using namespace std;
// Calculator Class to Implement Inline Function
class Calculator {
public:
    inline double add(double a, double b) { return a + b; }
    inline double subtract(double a, double b) { return a - b; }
    inline double multiply(double a, double b) { return a * b; }

    inline double divide(double a, double b) {
        if (b == 0) {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
        return a / b;
    }
};
// Main Function
int main() {
    Calculator calc;
    double num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "\n--- Results ---\n";
    cout << "Addition:       " << calc.add(num1, num2) << endl;
    cout << "Subtraction:    " << calc.subtract(num1, num2) << endl;
    cout << "Multiplication: " << calc.multiply(num1, num2) << endl;
    cout << "Division:       " << calc.divide(num1, num2) << endl;

    return 0;
}