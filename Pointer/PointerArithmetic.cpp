#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int* arr = new int[n]; 

    cout << "\nEnter " << n << " elements:\n";
    for (int i = 0; i < n; ++i) {
        cin >> *(arr + i); 
    }

    cout << "\nYou entered:\n";
    for (int i = 0; i < n; ++i) {
        cout << *(arr + i) << " "; 
    }

    cout << "\nSamriddhi Gautam : BIT28 : Array Input/Output Using Pointer Arithmetic\n";

    delete[] arr; 
    return 0;
}

