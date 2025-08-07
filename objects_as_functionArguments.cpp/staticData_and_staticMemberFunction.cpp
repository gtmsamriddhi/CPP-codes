#include <iostream>
using namespace std;

class Employee {
private:
    int empID;
    string name;

    static int count;

public:
    
    void input() {
        cout << "Enter employee ID: ";
        cin >> empID;
        cout << "Enter name: ";
        cin >> name;
        count++; 
    }
 void display() {
        cout << "Employee ID: " << empID << ", Name: " << name << endl;
    }

    
    static void showCount() {
        cout << "Total number of employees: " << count << endl;
    }
};

int Employee::count = 0;

int main() {
    Employee e1, e2;

    e1.input();
    e2.input();

    cout << "\nEmployee Details:\n";
    e1.display();
    e2.display();

   
    Employee::showCount();
    cout << "\nSamriddhi Gautam : BIT28 : Static Members (Employee)" << endl;

    return 0;
}
