#include <iostream>
#include <string>
using namespace std;
// Contained Class
class Engine {
private:
    int horsepower;
    string type;

public:
    Engine(int hp, string t) : horsepower(hp), type(t) {}

    void showEngineDetails() {
        cout << "Engine: " << type << " (" << horsepower << " HP)" << endl;
    }
};
// Container Class
class Car {
private:
    string model;
    Engine eng;

public:
    Car(string m, int hp, string t) : model(m), eng(hp, t) {}

    void showCarDetails() {
        cout << "Car Model: " << model << endl;
        eng.showEngineDetails();
    }
};

int main() {
    Car myCar("Mustang GT", 450, "V8");
    myCar.showCarDetails();

    return 0;
}