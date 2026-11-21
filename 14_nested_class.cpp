// Program 14: Nested Class
// Demonstrates defining a helper/scoped class (Department) inside an enclosing class (University).

#include <iostream>
#include <string>
#include <utility>

class University {
public:
    // Nested class scoped within University::Department
    class Department {
    private:
        std::string name;

    public:
        explicit Department(std::string departmentName)
            : name(std::move(departmentName)) {}

        void display() const {
            std::cout << "Department: " << name << '\n';
        }
    };
};

int main() {
    // Instantiating nested class using outer class scope resolution
    University::Department department("Artificial Intelligence and Data Science");
    department.display();
    return 0;
}
