//program to dynamically allocate memory for an array using pointers, accept elements from the user, and display them
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int* arr = new int[n];
   
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; ++i) {
        cin >> *(arr + i);  
    }

    
    cout << "\nArray elements are:\n";
    for (int i = 0; i < n; ++i) {
        cout << *(arr + i) << " ";  
    }

    cout << "\nSamriddhi Gautam : BIT28 : Dynamic Array Using Pointers\n";
    delete[] arr;

    return 0;
}
