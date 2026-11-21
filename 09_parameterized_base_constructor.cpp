// Program 9: Parameterized Base Constructor
// Passes arguments from a derived class constructor to a parameterized base constructor via initializer list.

#include <iostream>
#include <string>
#include <utility>

class Person {
protected:
    std::string name;

public:
    explicit Person(std::string personName) : name(std::move(personName)) {}
};

class Student : public Person {
private:
    int rollNumber;

public:
    // Member initializer list forwards studentName to Person's constructor before initializing rollNumber
    Student(std::string studentName, int roll)
        : Person(std::move(studentName)), rollNumber(roll) {}

    void display() const {
        std::cout << "Name: " << name << '\n';
        std::cout << "Roll Number: " << rollNumber << '\n';
    }
};

int main() {
    Student student("Kiran", 24);
    student.display();
    return 0;
}
