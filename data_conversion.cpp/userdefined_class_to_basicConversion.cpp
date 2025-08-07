#include <iostream>
using namespace std;

class Time {
private:
    int hours;
    int minutes;

public:
   
    Time(int h = 0, int m = 0) {
        hours = h;
        minutes = m;
    }

    operator int() {
        return hours * 60 + minutes;
    }

    void display() {
        cout << hours << " hours and " << minutes << " minutes" << endl;
    }
};

int main() {
    Time T1(2, 30);

    cout << "Time T1: ";
    T1.display();

    int totalMinutes = T1; 

    cout << "Total time in minutes: " << totalMinutes << endl;
    cout << "\nSamriddhi Gautam : BIT28 : Class to Basic Conversion" << endl;

    return 0;
}
