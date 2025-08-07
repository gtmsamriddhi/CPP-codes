#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5;
    int arr[SIZE];

    cout << "Enter " << SIZE << " integers:\n";

    for (int i = 0; i < SIZE; i++) {
        cout << "Element " << i << ": ";
        cin >> arr[i];
    }

    int index;
    cout << "\nEnter index to access (0 to " << SIZE - 1 << "): ";
    cin >> index;

    try {
        if (index < 0 || index >= SIZE) {
            // Throwing the invalid index as an exception
            throw index;
        }
        cout << "Element at index " << index << " is: " << arr[index] << endl;
    }
    catch (int ex) {
        cout << " Error: Index " << ex << " is out of bounds!" << endl;
    }
   cout << "Samriddhi Gautam : BIT28 : Array out of bound exception";
    return 0;
}
