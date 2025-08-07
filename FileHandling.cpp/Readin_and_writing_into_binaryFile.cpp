#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

class Student {
    char name[50];
    int rollNumber;
    float marks;

public:
    void getData() {
        cout << "Enter name: ";
        cin.getline(name, 50);
        cout << "Enter roll number: ";
        cin >> rollNumber;
        cout << "Enter marks: ";
        cin >> marks;
        cin.ignore(); // flush newline
    }

    void showData() const {
        cout << "\nName: " << name
             << "\nRoll Number: " << rollNumber
             << "\nMarks: " << marks << endl;
    }
};

int main() {
    Student s;

    // Input and write data to binary file
    ofstream outFile("student.dat", ios::binary);
    if (!outFile) {
        cerr << "Error opening file for writing!" << endl;
        return 1;
    }

    cout << "Enter student details:\n";
    s.getData();
    outFile.write(reinterpret_cast<char*>(&s), sizeof(s));
    outFile.close();

    // Read data back from binary file
    ifstream inFile("student.dat", ios::binary);
    if (!inFile) {
        cerr << "Error opening file for reading!" << endl;
        return 1;
    }

    Student readStudent;
    inFile.read(reinterpret_cast<char*>(&readStudent), sizeof(readStudent));
    cout << "\nReading data from file:\n";
    readStudent.showData();
    inFile.close();
    cout << "Samriddhi Gautam : BIT 28 : reading and writing into binary file" ;
    return 0;
}
