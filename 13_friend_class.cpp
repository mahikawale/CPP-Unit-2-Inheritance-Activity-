// Program 13: Friend Class
// Grants a trusted external class (Auditor) access to private members of Account.

#include <iostream>

class Account {
private:
    double balance;
    // Declaring Auditor as a friend allows it to inspect private 'balance'
    friend class Auditor;

public:
    explicit Account(double initialBalance) : balance(initialBalance) {}
};

class Auditor {
public:
    void inspect(const Account& account) const {
        // Accessing private member 'balance' directly
        std::cout << "Account Balance: " << account.balance << '\n';
    }
};

int main() {
    Account account(5000.0);
    Auditor auditor;
    auditor.inspect(account);
    return 0;
}
