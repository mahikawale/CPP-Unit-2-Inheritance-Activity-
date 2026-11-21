// Program 12: Virtual Base Class and Diamond Inheritance
// Prevents duplicate Person subobjects in TeachingAssistant using 'virtual' inheritance.

#include <iostream>
#include <string>
#include <utility>

class Person {
protected:
    std::string name;

public:
    explicit Person(std::string personName) : name(std::move(personName)) {}

    void displayName() const {
        std::cout << "Name: " << name << '\n';
    }
};

// Virtual inheritance ensures only one shared instance of Person is inherited
class Student : virtual public Person {
public:
    Student() : Person("Unknown") {}
};

class Employee : virtual public Person {
public:
    Employee() : Person("Unknown") {}
};

// Most-derived class directly initializes the virtual base class Person
class TeachingAssistant : public Student, public Employee {
public:
    explicit TeachingAssistant(std::string assistantName)
        : Person(std::move(assistantName)), Student(), Employee() {}
};

int main() {
    TeachingAssistant assistant("Riya");
    assistant.displayName(); // Unambiguous call because only one Person subobject exists
    return 0;
}
