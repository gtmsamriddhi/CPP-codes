#include <iostream>
#include <fstream>
using namespace std;

class Employee {
private:
    int id;
    char name[50];     
    float salary;

public:
    void inputData() {
        cout << "Enter Employee ID: ";
        cin >> id;
        cin.ignore(); 
        cout << "Enter Name: ";
        cin.getline(name, 50);
        cout << "Enter Salary: ";
        cin >> salary;
    }

    void displayData() const {
        cout << "ID: " << id << ", Name: " << name << ", Salary: " << salary << endl;
    }
};

int main() {
    fstream file("employees.dat", ios::binary | ios::out | ios::trunc);

    if (!file) {
        cerr << "Error creating file!" << endl;
        return 1;
    }

    int n;
    cout << "Enter number of employees: ";
    cin >> n;

    Employee emp;

  
    for (int i = 0; i < n; ++i) {
        cout << "\nEnter details for employee " << i + 1 << ":\n";
        emp.inputData();
        file.write(reinterpret_cast<char*>(&emp), sizeof(emp));
    }

    file.close();

   
    ifstream inFile("employees.dat", ios::binary);

    if (!inFile) {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    cout << "\n--- Employee Details Read from File ---\n";
    while (inFile.read(reinterpret_cast<char*>(&emp), sizeof(emp))) {
        emp.displayData();
    }

    inFile.close();
    cout << "Samriddhi Gautma : BIT28 : Reading and writing objects to file";
    return 0;
}
