#include <iostream>
using namespace std;

// ----------- extern variable (global scope) -----------
extern int globalVar; // Declaration (defined below)

// Function to demonstrate static
void demonstrateStatic() {
    static int counter = 0; // retains value between calls
    counter++;
    cout << "Static counter value: " << counter << endl;
}

// Function to demonstrate auto (type deduction)
void demonstrateAuto() {
    auto num = 10;           // automatically deduced as int
    auto pi = 3.14159;       // deduced as double
    auto letter = 'A';       // deduced as char

    cout << "Auto variables: num = " << num
         << ", pi = " << pi
         << ", letter = " << letter << endl;
}

// ----------- Definition of extern variable -----------
int globalVar = 50;

int main() {
    cout << "--- Demonstrating auto ---" << endl;
    demonstrateAuto();

    cout << "\n--- Demonstrating static ---" << endl;
    demonstrateStatic();
    demonstrateStatic(); // Call again to show value is retained
    demonstrateStatic();

    cout << "\n--- Demonstrating extern ---" << endl;
    cout << "Extern globalVar = " << globalVar << endl;

    cout << "\nSamriddhi Gautam : BIT28 : Scope and Storage Class Demo" << endl;

    return 0;
}
