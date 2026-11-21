// Program 1: Basic Single Inheritance
// Demonstrates how a derived class (Student) inherits properties and methods from a base class (Person).

#include <iostream>
#include <string>
#include <utility>

class Person {
protected:
    std::string name; // Protected so derived classes like Student can access it directly

public:
    // Constructor using std::move to efficiently transfer string ownership
    explicit Person(std::string personName) : name(std::move(personName)) {}

    void displayName() const {
        std::cout << "Name: " << name << '\n';
    }
};

// Public inheritance models an "is-a" relationship (Student is a Person)
class Student : public Person {
private:
    int rollNumber;

public:
    // Calls Base class constructor in the member initializer list
    Student(std::string studentName, int roll)
        : Person(std::move(studentName)), rollNumber(roll) {}

    void displayStudent() const {
        displayName(); // Reusing base class member function
        std::cout << "Roll Number: " << rollNumber << '\n';
    }
};

int main() {
    Student student("Amit", 101);
    student.displayStudent();
    return 0;
}
