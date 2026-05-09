#include <iostream>
using namespace std;
// Geometry Class to Implement Function Overloading
class Geometry {
public:
    int calculateSum(int a, int b){ return a + b;}
    double calculateSum(int a, double b){ return a + b;}
    double calculateSum(double a, int b){ return a + b;}
    double calculateSum(double a, double b){ return a + b;}

    double calculateArea(double length){ return length*length;}
    double calculateArea(double length, double width){ return length * width;}

    double calculateVolume(double l, double w, double h){ return l * w * h;}
};
// Main Function
int main() {
    Geometry geo;

    cout << "Square Area (side 5): " << geo.calculateArea(5.0) << endl;
    cout << "Rectangle Area (4x6): " << geo.calculateArea(4.0, 6.0) << endl;

    cout << "Sum (int + int):      " << geo.calculateSum(10, 20) << endl;
    cout << "Sum (double + double): " << geo.calculateSum(10.5, 20.7) << endl;

    cout << "Box Volume (2x3x4):   " << geo.calculateVolume(2.0, 3.0, 4.0) << endl;

    return 0;
}