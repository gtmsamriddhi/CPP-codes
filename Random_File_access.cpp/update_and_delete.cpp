#include <iostream>
#include <fstream>
using namespace std;

class Student {
    char name[50];
    int roll;
    float marks;
    bool deleted;

public:
    void input() {
        cout << "Enter name: ";
        cin.ignore();
        cin.getline(name, 50);
        cout << "Enter roll number: ";
        cin >> roll;
        cout << "Enter marks: ";
        cin >> marks;
        deleted = false;
    }

    void display() const {
        if (!deleted) {
            cout << "\nName: " << name
                 << "\nRoll: " << roll
                 << "\nMarks: " << marks << endl;
        }
    }

    void updateMarks(float newMarks) {
        marks = newMarks;
    }

    void markDeleted() {
        deleted = true;
    }

    bool isDeleted() const {
        return deleted;
    }
};

int main() {
    fstream file("students.dat", ios::in | ios::out | ios::binary | ios::trunc);
    Student s;
    int choice, pos, n;
    float newMarks;

    do {
        cout << "\n--- Menu ---\n";
        cout << "1. Write Records\n";
        cout << "2. Update Marks\n";
        cout << "3. Delete Record\n";
        cout << "4. Display All Records\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter number of students: ";
                cin >> n;
                for (int i = 0; i < n; ++i) {
                    cout << "\nEnter data for student " << i + 1 << ":\n";
                    s.input();
                    file.write(reinterpret_cast<char*>(&s), sizeof(s));
                }
                break;

            case 2:
                cout << "Enter record index to update marks (0-based): ";
                cin >> pos;
                cout << "Enter new marks: ";
                cin >> newMarks;

                file.seekg(pos * sizeof(Student), ios::beg);
                file.read(reinterpret_cast<char*>(&s), sizeof(s));
                s.updateMarks(newMarks);
                file.seekp(pos * sizeof(Student), ios::beg);
                file.write(reinterpret_cast<char*>(&s), sizeof(s));
                cout << "Marks updated.\n";
                break;

            case 3:
                cout << "Enter record index to delete (0-based): ";
                cin >> pos;

                file.seekg(pos * sizeof(Student), ios::beg);
                file.read(reinterpret_cast<char*>(&s), sizeof(s));
                s.markDeleted();
                file.seekp(pos * sizeof(Student), ios::beg);
                file.write(reinterpret_cast<char*>(&s), sizeof(s));
                cout << "Record marked as deleted.\n";
                break;

            case 4:
                file.clear();  // reset file state
                file.seekg(0);
                cout << "\n--- Active Student Records ---\n";
                while (file.read(reinterpret_cast<char*>(&s), sizeof(s))) {
                    s.display();
                }
                break;

            case 5:
                cout << "Exiting program.\n";
                break;

            default:
                cout << "Invalid choice! Try again.\n";
                break;
        }

       
        file.clear();
        file.seekg(0);
    } while (choice != 5);

    file.close();
    return 0;
}
