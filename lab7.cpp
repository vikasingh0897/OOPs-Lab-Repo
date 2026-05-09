#include <iostream>
using namespace std;
// Point Class to Implement operator overloading
class Point {
private:
    int x, y;

public:
    Point(int x = 0, int y = 0) : x(x), y(y) {}

    Point operator+(const Point& other) {
        return Point(x + other.x, y + other.y);
    }

    Point operator-(const Point& other) {
        return Point(x - other.x, y - other.y);
    }

    Point& operator++() {
        x++;
        y++;
        return *this;
    }

    bool operator==(const Point& other) {
        return (x == other.x && y == other.y);
    }

    friend ostream& operator<<(ostream& os, const Point& p) {
        os << "(" << p.x << ", " << p.y << ")";
        return os;
    }
};
// Main Function
int main() {
    Point p1(10, 20), p2(5, 5);

    Point p3 = p1 + p2;
    Point p4 = p1 - p2;

    cout << "p1: " << p1 << endl;
    cout << "p2: " << p2 << endl;
    cout << "p1 + p2: " << p3 << endl;
    cout << "p1 - p2: " << p4 << endl;

    if (p1 == p2) {
        cout << "p1 and p2 are equal" << endl;
    } else {
        cout << "p1 and p2 are not equal" << endl;
    }

    ++p1;
    cout << "p1 after ++: " << p1 << endl;

    return 0;
}