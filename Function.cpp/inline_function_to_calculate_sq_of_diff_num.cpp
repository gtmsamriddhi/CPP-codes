#include <iostream>
using namespace std;

// Inline function to return square
inline int square(int n) {
    return n * n;
}

int main() {
    cout << "Square of 2: " << square(2) << endl;
    cout << "Square of 5: " << square(5) << endl;
    cout << "Square of 7: " << square(7) << endl;
    cout << " \n Samriddhi Gautam : BIT28 : Inline function ";
    return 0;
}
