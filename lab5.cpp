#include <iostream>
#include <string>
using namespace std;
// Student Class to Implement default, parameterized, copy, and overloaded constructors
class Student {
private:
    string name;
    int roll;

public:
    Student() {
        name = "Unknown";
        roll = 0;
        cout << "Default Constructor Called" << endl;
    }

    Student(string n, int r) {
        name = n;
        roll = r;
        cout << "Parameterized Constructor Called" << endl;
    }

    Student(const Student &s) {
        name = s.name;
        roll = s.roll;
        cout << "Copy Constructor Called" << endl;
    }

    Student(int r) {
        name = "No Name";
        roll = r;
        cout << "Overloaded Constructor (Single Param) Called" << endl;
    }

    void display() {
        cout << "Name: " << name << ", Roll: " << roll << endl << endl;
    }
};
// Main Function
int main() {
    Student s1;
    s1.display();

    Student s2("Alice", 101);
    s2.display();

    Student s3(s2);
    s3.display();

    Student s4(202);
    s4.display();

    return 0;
}