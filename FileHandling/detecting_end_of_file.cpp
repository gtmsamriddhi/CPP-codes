#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream inFile("sample.txt");  
    if (!inFile) {
        cerr << "Error: Could not open file!" << endl;
        return 1;
    }

    string line;

    cout << "Reading contents of 'sample.txt':\n\n";

    while (getline(inFile, line)) {
        cout << line << endl;  
    }

    inFile.close();  

    cout << "\nSamriddhi Gautam : BIT28 : Detecting end of file" << endl;

    return 0;
}


