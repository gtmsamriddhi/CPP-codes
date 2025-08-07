//program to create a function that accepts an array and its size using pointers. 
//The function should calculate and return the sum of all elements in the array.
#include <iostream>
using namespace std;

int calculateSum(int* ptr, int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += *(ptr + i);  
    }
    return sum;
}

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int* arr = new int[n];

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; ++i) {
        cin >> *(arr + i);
    }

    int total = calculateSum(arr, n);

    cout << "\nSum of array elements: " << total << endl;

    cout << "\nSamriddhi Gautam : BIT28 : Sum of Array Using Pointer Function\n";

    delete[] arr;
    return 0;
}
