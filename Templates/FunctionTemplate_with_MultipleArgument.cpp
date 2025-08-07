#include <iostream>
#include <string>
using namespace std;
template <typename T1, typename T2>
void displayValues(T1 a, T2 b) {
    cout << "Value 1: " << a << ", Type: " << typeid(a).name() << endl;
    cout << "Value 2: " << b << ", Type: " << typeid(b).name() << endl;
    cout << "----------------------------" << endl;
}

int main() {
    // int and float
    displayValues(10, 3.14f);

    // float and string
    displayValues(2.5f, string("Hello"));

    // char and double
    displayValues('A', 6.78);

    // string and int
    displayValues(string("World"), 42);
    cout << "Samriddhi Gautam: BIT28 : Function Templates with multiple arguments ";

    return 0;
}
