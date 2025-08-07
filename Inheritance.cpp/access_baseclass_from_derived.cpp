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
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void displayPerson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived class
class Student : public Person {
private:
    int studentID;
    float marks;

public:
    void inputStudent() {
        inputPerson();  // Calling base class function
        cout << "Enter student ID: ";
        cin >> studentID;
        cout << "Enter marks: ";
        cin >> marks;
    }

    void displayStudent() {
        displayPerson();  // Calling base class function
        cout << "Student ID: " << studentID << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s1;

    cout << "--- Enter Student Details ---" << endl;
    s1.inputStudent();

    
    cout << "\n--- Displaying Student Details ---" << endl;
    s1.displayStudent();
    cout <<"\n Samriddhi Gautam : BIT28 : Inheritance";
    return 0;
}

