#include <iostream>
using namespace std;

// Base class
class Person {
protected:
    string name;
    int age;

public:
    void inputPerson() {
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter age: ";
        cin >> age;
        cin.ignore(); 
    }

    void displayPerson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived class 1
class Employee : public Person {
protected:
    int empID;
    string department;

public:
    void inputEmployee() {
        cout << "Enter employee ID: ";
        cin >> empID;
        cin.ignore(); // consume newline
        cout << "Enter department: ";
        getline(cin, department);
    }

    void displayEmployee() {
        cout << "Employee ID: " << empID << endl;
        cout << "Department: " << department << endl;
    }
};

// Derived class 2
class Manager : public Employee {
private:
    string managerLevel;

public:
    void inputManager() {
        cout << "Enter manager level: ";
        getline(cin, managerLevel);
    }

    void displayManager() {
        cout << "Manager Level: " << managerLevel << endl;
    }
};

int main() {
    Manager mgr;

    cout << "Enter Manager's Personal Details:\n";
    mgr.inputPerson();

    cout << "\nEnter Manager's Employment Details:\n";
    mgr.inputEmployee();

    cout << "\nEnter Manager's Managerial Details:\n";
    mgr.inputManager();

    cout << "\n--- Manager Details ---\n";
    mgr.displayPerson();
    mgr.displayEmployee();
    mgr.displayManager();

    cout << "\nSamriddhi Gautam : BIT28 : Multilevel Inheritance" << endl;

    return 0;
}
