#include <iostream>
#include <string>
using namespace std;

// Abstract class
class AbstractEmployee {
public:
    virtual void displayInfo() const = 0; // Pure virtual function
    virtual ~AbstractEmployee() {} // Virtual destructor
};

// Concrete class
class Employee : public AbstractEmployee {
private:
    string name;
    int id;
    double salary;

public:
    // Constructor
    Employee(string empName, int empId, double empSalary)
        : name(empName), id(empId), salary(empSalary) {}

    // Override displayInfo
    void displayInfo() const override {
        cout << "Name: " << name << "\nID: " << id << "\nSalary: $" << salary << endl;
    }

    // Additional member function
    void giveRaise(double amount) {
        salary += amount;
        cout << name << " got a raise of $" << amount << "!\nNew Salary: $" << salary << endl;
    }
};

int main() {
    Employee emp("Ravi", 101, 50000);
    emp.displayInfo();
    emp.giveRaise(5000);
    cout << "Samriddhi Gautam : BIT28 : Concrete class example" ;
    return 0;
}
