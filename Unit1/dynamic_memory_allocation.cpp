#include <iostream>
using namespace std;

int main() {
    int size;

    // Step 1: Ask for size
    cout << "Enter the number of integers: ";
    cin >> size;

    // Step 2: Dynamic memory allocation
    int* arr = new int[size];

    // Step 3: Accept elements
    cout << "Enter " << size << " integers:\n";
    for (int i = 0; i < size; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }

    // Step 4: Display elements
    cout << "\nYou entered:\n";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Step 5: Free memory
    delete[] arr;

    cout << "\nMemory deallocated successfully." << endl;
cout << "\n Samriddhi Gautam : BIT28 : DMA";
    return 0;
}
