#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    int numPersons;

    cout << "Enter number of persons: ";
    cin >> numPersons;

    // To ignore leftover newline from previous input
    cin.ignore();

    // Writing to the file
    ofstream outFile("persons.txt");

    if (!outFile) {
        cerr << "Error creating file!" << endl;
        return 1;
    }

    string name;
    int age;

    cout << "\n--- Enter name and age of " << numPersons << " persons ---\n";
    for (int i = 1; i <= numPersons; ++i) {
        cout << "Person " << i << " Name: ";
        getline(cin, name);
        cout << "Person " << i << " Age: ";
        cin >> age;
        cin.ignore();  // Clear newline character

        // Write to file
        outFile << name << "," << age << endl;
    }

    outFile.close();

    // Reading from the file
    ifstream inFile("persons.txt");

    if (!inFile) {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    cout << "\n--- Reading from file ---\n";

    while (getline(inFile, name, ',')) {
        inFile >> age;
        inFile.ignore();  // Skip newline
        cout << "Name: " << name << ", Age: " << age << endl;
    }

    inFile.close();
    cout << "Samriddhi Gautam : BIT28 : Reading and writing text file" ;
    return 0;
}
