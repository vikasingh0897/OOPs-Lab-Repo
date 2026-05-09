#include <iostream>
using namespace std;
// Base Class
class Shape {
protected:
    double width, height;

public:
    void setDimensions(double w, double h) {
        width = w;
        height = h;
    }

    virtual void calculateArea() = 0;
};
// Abstract class
class Rectangle : public Shape {
public:
    void calculateArea() override {
        cout << "Area of Rectangle: " << width * height << endl;
    }
};
// Abstract class
class Triangle : public Shape {
public:
    void calculateArea() override {
        cout << "Area of Triangle: " << 0.5 * width * height << endl;
    }
};
// Main Function
int main() {
    Shape* ptr;
    Rectangle rect;
    Triangle tri;

    ptr = &rect;
    ptr->setDimensions(10, 5);
    ptr->calculateArea();

    ptr = &tri;
    ptr->setDimensions(10, 5);
    ptr->calculateArea();

    return 0;
}