#include <iostream>
using namespace std;

// Overloaded functions
void display(int num) {
    cout << "Integer value: " << num << endl;
}

void display(float num) {
    cout << "Float value: " << num << endl;
}

void display( const string& str) {
    cout << "String value: " << str << endl;
}

int main() {
    display(42);               // Calls display(int)
    display(3.14f);            // Calls display(float)
    display("Hello C++");      // Calls display(string)
  cout << "\n Samriddhi Gautam : BIT 28 : Unit2" ;
    return 0;
}
