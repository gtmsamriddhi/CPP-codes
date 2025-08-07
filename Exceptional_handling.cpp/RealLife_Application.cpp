// C++ program that demonstrates a real-life application of exception handling  specifically handling file open failure
#include <iostream>
#include <fstream>  
#include <string>
using namespace std;

int main() {
    string filename;
    cout << "Enter filename to open: ";
    cin >> filename;

    try {
        ifstream file(filename); 

       
        if (!file.is_open()) {
            throw runtime_error("Error: Unable to open file '" + filename + "'");
        }

        cout << "File opened successfully!\n";
        string line;
        while (getline(file, line)) {
            cout << line << endl;
        }

        file.close();
    }
    catch (const runtime_error& e) {
        // Handle the specific exception
        cerr << e.what() << endl;
        cerr << "Program terminated safely.\n";
    }
    cout << "Samriddhi Gautam : BIT28 : Real life application of file handeling";
    return 0;
}
