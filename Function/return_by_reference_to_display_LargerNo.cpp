#include <iostream>
using namespace std;

// Function that returns a reference to the larger number
int& findLarger(int &a, int &b) {
    return (a > b) ? a : b;
}

int main() {
    int num1, num2;
    
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    
    // Get reference to the larger number
    int &largerNum = findLarger(num1, num2);
    
    cout << "\nThe larger number is: " << largerNum << endl;
    
    // Demonstrate that it's a reference by modifying it
    largerNum *= 2;
    cout << "After doubling the larger number:" << endl;
    cout << "First number: " << num1 << endl;
    cout << "Second number: " << num2 << endl;
    cout << "Samriddhi Gautam : BIT28 : ReturnByReference" ;
    return 0;
}