#include <iostream>
using namespace std;

int main() {
    int num;
    float fnum;
    char ch;

    cout << "Enter an integer: ";
    cin >> num;

    cout << "Enter a float: ";
    cin >> fnum;

    cout << "Enter a character: ";
    cin >> ch;

   
    cout << "\n--- Values ---" << endl;
    cout << "Integer: " << num << endl;
    cout << "Float: " << fnum << endl;
    cout << "Character: " << ch << endl;

    cout << "\n--- Sizes (in bytes) ---" << endl;
    cout << "Size of int: " << sizeof(num) << endl;
    cout << "Size of float: " << sizeof(fnum) << endl;
    cout << "Size of char: " << sizeof(ch) << endl;

    
    float implicitFloat = num;
    cout << "\nImplicit conversion (int to float): " << implicitFloat << endl;


    int explicitInt = (int)fnum; 
    cout << "Explicit conversion (float to int): " << explicitInt << endl;
    cout << "Samriddhi Gautam : BIt 28 : Data types conversion" ;
    return 0;
}
