// Program 10: Function Overriding
// Demonstrates runtime polymorphism using 'virtual' in the base class and 'override' in derived classes.

#include <iostream>

class Vehicle {
public:
    // 'virtual' enables dynamic dispatch based on actual object type
    virtual void move() const {
        std::cout << "Vehicle is moving\n";
    }
    virtual ~Vehicle() = default; // Virtual destructor ensures proper cleanup in polymorphic hierarchies
};

class Car : public Vehicle {
public:
    // 'override' ensures compiler checks that signature matches base virtual function
    void move() const override {
        std::cout << "Car moves on roads\n";
    }
};

class Boat : public Vehicle {
public:
    void move() const override {
        std::cout << "Boat moves on water\n";
    }
};

int main() {
    Car car;
    Boat boat;
    car.move();
    boat.move();
    return 0;
}
