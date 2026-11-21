// Program 6: Multiple Inheritance
// Demonstrates a derived class (Student) inheriting simultaneously from two base classes (Academic & Sports).

#include <iostream>

class Academic {
protected:
    int academicMarks;

public:
    explicit Academic(int marks) : academicMarks(marks) {}

    void showAcademic() const {
        std::cout << "Academic Marks: " << academicMarks << '\n';
    }
};

class Sports {
protected:
    int sportsMarks;

public:
    explicit Sports(int marks) : sportsMarks(marks) {}

    void showSports() const {
        std::cout << "Sports Marks: " << sportsMarks << '\n';
    }
};

// Inherits from both Academic and Sports
class Student : public Academic, public Sports {
public:
    Student(int academic, int sports)
        : Academic(academic), Sports(sports) {}

    void showTotal() const {
        // Combines protected members from both base classes
        std::cout << "Total Marks: " << academicMarks + sportsMarks << '\n';
    }
};

int main() {
    Student student(80, 15);
    student.showAcademic();
    student.showSports();
    student.showTotal();
    return 0;
}
