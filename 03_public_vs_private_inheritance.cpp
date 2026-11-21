// Program 3: Public vs Private Inheritance
// Shows how inheritance access specifiers change the visibility of base class members.

#include <iostream>

class Base {
public:
    void show() const {
        std::cout << "Base public function\n";
    }
};

// Public inheritance: public members of Base remain public in PublicDerived
class PublicDerived : public Base {
};

// Private inheritance: public/protected members of Base become private inside PrivateDerived
class PrivateDerived : private Base {
public:
    void callBaseShow() const {
        show(); // Accessible inside the class, even though it is now private to outside callers
    }
};

int main() {
    PublicDerived publicObject;
    publicObject.show(); // Allowed because show() is still public

    PrivateDerived privateObject;
    privateObject.callBaseShow(); // Allowed via public wrapper method
    // privateObject.show(); // Compiler Error: show() is private due to private inheritance
    return 0;
}
