#include <iostream>
using namespace std;

// Base class
class Account {
protected:
    int accountNumber;
    float balance;

public:
    void input() {
        cout << "Enter account number: ";
        cin >> accountNumber;
        cout << "Enter balance: ";
        cin >> balance;
    }

    void display() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

// Derived class 1
class SavingAccount : public Account {
private:
    float interestRate;

public:
    void inputSaving() {
        input();
        cout << "Enter interest rate (%): ";
        cin >> interestRate;
    }

    void displaySaving() {
        display();
        cout << "Interest Rate: " << interestRate << "%" << endl;
    }
};

// Derived class 2
class CurrentAccount : public Account {
private:
    float overdraftLimit;

public:
    void inputCurrent() {
        input();
        cout << "Enter overdraft limit: ";
        cin >> overdraftLimit;
    }

    void displayCurrent() {
        display();
        cout << "Overdraft Limit: " << overdraftLimit << endl;
    }
};

int main() {
    SavingAccount sa;
    CurrentAccount ca;

    cout << "Enter details for Saving Account:\n";
    sa.inputSaving();

    cout << "\nEnter details for Current Account:\n";
    ca.inputCurrent();

    cout << "\nSaving Account Details:\n";
    sa.displaySaving();

    cout << "\nCurrent Account Details:\n";
    ca.displayCurrent();

    cout << "\nSamriddhi Gautam : BIT28 : Hierarchical Inheritance" << endl;

    return 0;
}
