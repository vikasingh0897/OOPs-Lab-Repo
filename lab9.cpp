#include <iostream>
using namespace std;
// Base class for virtual functions
class Base {
public:
    virtual void display() {
        cout << "Display from Base class" << endl;
    }

    virtual void show() {
        cout << "Show from Base class" << endl;
    }
};
// Derived class to implement runtime overriding and polymorphism
class Derived : public Base {
public:
    void display() override {
        cout << "Display from Derived class (Overridden)" << endl;
    }

    void show() override {
        cout << "Show from Derived class (Overridden)" << endl;
    }
};
// Main Function
int main() {
    Base* ptr;
    Base baseObj;
    Derived derObj;

    ptr = &baseObj;
    ptr->display();
    ptr->show();

    cout << "----------------------------" << endl;

    ptr = &derObj;
    ptr->display();
    ptr->show();

    return 0;
}