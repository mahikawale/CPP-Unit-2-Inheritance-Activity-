// Program 11: Abstract Class
// Defines an interface using a pure virtual function (= 0) that derived classes must implement.

#include <iostream>

class Shape {
public:
    // Pure virtual function makes Shape an abstract class (cannot be instantiated directly)
    virtual double area() const = 0;
    virtual ~Shape() = default;
};

class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double givenLength, double givenWidth)
        : length(givenLength), width(givenWidth) {}

    double area() const override {
        return length * width;
    }
};

class Circle : public Shape {
private:
    double radius;

public:
    explicit Circle(double givenRadius) : radius(givenRadius) {}

    double area() const override {
        return 3.141592653589793 * radius * radius;
    }
};

int main() {
    Rectangle rectangle(5.0, 3.0);
    Circle circle(2.0);
    std::cout << "Rectangle Area: " << rectangle.area() << '\n';
    std::cout << "Circle Area: " << circle.area() << '\n';
    return 0;
}
