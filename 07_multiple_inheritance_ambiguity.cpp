// Program 7: Resolving Multiple-Inheritance Ambiguity
// Uses the scope-resolution operator (::) to disambiguate identical function names across base classes.

#include <iostream>

class Academic {
public:
    void display() const {
        std::cout << "Academic information\n";
    }
};

class Sports {
public:
    void display() const {
        std::cout << "Sports information\n";
    }
};

class Student : public Academic, public Sports {
public:
    void displayAll() const {
        // Explicitly specify which base class version of display() to invoke
        Academic::display();
        Sports::display();
    }
};

int main() {
    Student student;
    // Direct resolution from outside using object.BaseClass::method()
    student.Academic::display();
    student.Sports::display();
    student.displayAll();
    return 0;
}
