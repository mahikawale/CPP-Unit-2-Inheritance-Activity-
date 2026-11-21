// Program 8: Constructor and Destructor Order
// Observes object lifecycle: Base constructs first, Derived destructs first.

#include <iostream>

class Base {
public:
    Base() {
        std::cout << "Base constructor\n";
    }
    ~Base() {
        std::cout << "Base destructor\n";
    }
};

class Derived : public Base {
public:
    Derived() {
        std::cout << "Derived constructor\n";
    }
    ~Derived() {
        std::cout << "Derived destructor\n";
    }
};

int main() {
    // Creation triggers Base() then Derived(); scope exit triggers ~Derived() then ~Base()
    Derived object;
    return 0;
}
