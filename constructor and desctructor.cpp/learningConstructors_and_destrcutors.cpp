//C++ program with a Person class having a constructor and destructor to show object creation and destruction.
#include <iostream>
using namespace std;

class Person {
    string name;
    int age;

public:
   
    Person(string n, int a) {
        name = n;
        age = a;
        cout << "Constructor called for " << name << endl;
    }
   
    ~Person() {
        cout << "Destructor called for " << name << endl;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    string name;
    int age;

    cout << "Enter name: ";
    getline(cin, name);
    cout << "Enter age: ";
    cin >> age;

    Person p(name, age); 
    p.display();

    cout << "\nSamriddhi Gautam : BIT28 : Constructor & Destructor Demo" << endl;

    return 0; 
}
