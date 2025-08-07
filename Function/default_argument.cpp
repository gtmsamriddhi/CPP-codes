#include <iostream>
using namespace std;

// Function with default arguments for width and height
int volume(int length, int width = 5, int height = 10) {
    return length * width * height;
}

int main() {
    cout << "Volume with 1 arg (length=3): " << volume(3) << endl;
    cout << "Volume with 2 args (length=3, width=4): " << volume(3, 4) << endl;
    cout << "Volume with 3 args (3, 4, 5): " << volume(3, 4, 5) << endl;
    cout << "\n Samriddhi Gautam: BIT 28 : Default argument";
    return 0;
}
