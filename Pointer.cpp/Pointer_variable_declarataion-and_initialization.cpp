#include <iostream>
using namespace std;

int main() {
    int number = 42;       
    int* ptr = &number;    

    cout << "Value of number      : " << number << endl;
    cout << "Address of number    : " << &number << endl;
    cout << "Pointer (ptr) holds  : " << ptr << endl;
    cout << "Value pointed by ptr : " << *ptr << endl;

    cout << "\nSamriddhi Gautam : BIT28 : Pointer Declaration and Initialization" << endl;

    return 0;
}
