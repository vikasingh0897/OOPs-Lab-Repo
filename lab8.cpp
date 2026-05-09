#include <iostream>
#include <string>
using namespace std;
// Base class for Single, Multilevel, Hierarchical, and Hybrid
class Animal {
public:
    void eat() { cout << "Eating..." << endl; }
};

// SINGLE INHERITANCE
class Dog : public Animal {
public:
    void bark() { cout << "Barking..." << endl; }
};

// MULTILEVEL INHERITANCE
class Puppy : public Dog {
public:
    void weep() { cout << "Weeping..." << endl; }
};

// MULTIPLE INHERITANCE
class Mammal {
public:
    void breathe() { cout << "Breathing..." << endl; }
};

class Bat : public Animal, public Mammal {
public:
    void fly() { cout << "Flying..." << endl; }
};

// HIERARCHICAL INHERITANCE
class Cat : public Animal {
public:
    void meow() { cout << "Meowing..." << endl; }
};

// HYBRID INHERITANCE
class HybridPet : public Dog, public Cat {
public:
    void show() { cout << "I am a hybrid pet." << endl; }
};
// Main Function
int main() {
    cout << "--- Single Inheritance ---" << endl;
    Dog d;
    d.eat();
    d.bark();

    cout << "\n--- Multilevel Inheritance ---" << endl;
    Puppy p;
    p.eat();
    p.bark();
    p.weep();

    cout << "\n--- Multiple Inheritance ---" << endl;
    Bat b;
    b.eat();
    b.breathe();
    b.fly();

    cout << "\n--- Hierarchical Inheritance ---" << endl;
    Cat c;
    c.eat();
    c.meow();

    cout << "\n--- Hybrid Inheritance ---" << endl;
    HybridPet hp;
    hp.bark();
    hp.meow();
    hp.show();

    return 0;
}