#include <iostream>
using namespace std;
// FixedDeposit Class to Implement dynamic initialization using constructors
class FixedDeposit {
    long int principal;
    int years;
    float rate;
    float returnValue;

public:
    FixedDeposit() {}

    FixedDeposit(long int p, int y, float r) {
        principal = p;
        years = y;
        rate = r;
        returnValue = principal;
        for (int i = 0; i < y; i++) {
            returnValue = returnValue * (1.0 + r);
        }
    }

    FixedDeposit(long int p, int y, int r) {
        principal = p;
        years = y;
        rate = float(r) / 100;
        returnValue = principal;
        for (int i = 0; i < y; i++) {
            returnValue = returnValue * (1.0 + rate);
        }
    }

    void display() {
        cout << "Principal: " << principal << endl;
        cout << "Return Value: " << returnValue << endl << endl;
    }
};
// Main Function
int main() {
    long int p;
    int y, R;
    float r;

    cout << "Enter principal, years, and rate (decimal): ";
    cin >> p >> y >> r;
    FixedDeposit fd1(p, y, r);
    fd1.display();

    cout << "Enter principal, years, and rate (percentage): ";
    cin >> p >> y >> R;
    FixedDeposit fd2(p, y, R);
    fd2.display();

    return 0;
}