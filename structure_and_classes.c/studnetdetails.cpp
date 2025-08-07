#include <iostream>
using namespace std;


struct Student {
    int studentID;
    string name;
    float marks[3];  
};


class Result {
private:
    Student s;         
    float average;

public:
    void accept() {
        cout << "Enter Student ID: ";
        cin >> s.studentID;
        cin.ignore(); 
        cout << "Enter Name: ";
        getline(cin, s.name);

        cout << "Enter marks in 3 subjects:\n";
        for (int i = 0; i < 3; i++) {
            cout << "Subject " << i + 1 << ": ";
            cin >> s.marks[i];
        }

        calculateAverage(); 
    }

private:
    void calculateAverage() {
        float total = 0;
        for (int i = 0; i < 3; i++)
            total += s.marks[i];
        average = total / 3;
    }

public:
    void display() {
        cout << "\n--- Student Result ---\n";
        cout << "ID: " << s.studentID << endl;
        cout << "Name: " << s.name << endl;
        cout << "Marks: ";
        for (int i = 0; i < 3; i++)
            cout << s.marks[i] << " ";
        cout << "\nAverage Marks: " << average << endl;
    }
};

int main() {
    Result r;
    r.accept();
    r.display();
    cout << "\n Samriddhi Gautam : BIT 28 :Unit 3 ";
    return 0;
}
