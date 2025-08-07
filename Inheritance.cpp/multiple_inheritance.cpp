#include <iostream>
using namespace std;

// Base class 1
class AcademicRecord {
protected:
    int marks;

public:
    void setMarks(int m) {
        marks = m;
    }

    int getMarks() {
        return marks;
    }
};

// Base class 2
class SportsRecord {
protected:
    int sportsScore;

public:
    void setSportsScore(int s) {
        sportsScore = s;
    }

    int getSportsScore() {
        return sportsScore;
    }
};

// Derived class
class Student : public AcademicRecord, public SportsRecord {
public:
    int totalPerformance() {
        return marks + sportsScore;
    }

    void display() {
        cout << "Academic Marks: " << marks << endl;
        cout << "Sports Score: " << sportsScore << endl;
        cout << "Total Performance: " << totalPerformance() << endl;
    }
};

int main() {
    Student s1;

    s1.setMarks(85);
    s1.setSportsScore(90);

    s1.display();
    cout << "\nSamriddhi Gautam : BIT28 : Multiple Inheritance" << endl;
    return 0;
}
