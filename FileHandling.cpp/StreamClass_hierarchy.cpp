#include <iostream>
#include <fstream>  
using namespace std;

int main() {
   
    ofstream outFile("sample.txt");  

    if (!outFile) {
        cerr << "Error creating file!" << endl;
        return 1;
    }

    outFile << "Hello, this is a test file.\n";
    outFile << "C++ stream classes are powerful!\n";
    outFile.close();  
    ifstream inFile("sample.txt");  
    string line;

    if (!inFile) {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    cout << "Reading from the file:\n";
    while (getline(inFile, line)) {
        cout << line << endl;
    }

    inFile.close();  
    cout << "Samriddhi Gautam : BIT28 : Stream class hierarchy" ;
    return 0;
}


