#include <iostream>
using namespace std;
// Counter Class to Implement static data member & static member function
class Counter {
private:
    static int count;
    int id;

public:
    Counter() {
        count++;
        id = count;
    }

    static int getCount() {
        return count;
    }

    void displayId() {
        cout << "Object ID: " << id << endl;
    }
};

int Counter::count = 0;
// Main Function
int main() {
    cout << "Initial Count: " << Counter::getCount() << endl;

    Counter c1, c2, c3;

    c1.displayId();
    c2.displayId();
    c3.displayId();

    cout << "Final Count: " << Counter::getCount() << endl;

    return 0;
}