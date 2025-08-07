// use of try , throw and catch to handle exception when divisor is zero
#include <iostream>
using namespace std;

int main() {
    int numerator, denominator;
    float result;

    cout << "Enter numerator: ";
    cin >> numerator;

    cout << "Enter denominator: ";
    cin >> denominator;

    try {
        if (denominator == 0) {
            //  Throwing exception for division by zero
            throw "Error: Division by zero is not allowed.";
        }

        result = (float)numerator / denominator;
        cout << "Result: " << result << endl;
    }
    catch (const char* msg) {
        //  Catching and displaying the error
        cout << msg << endl;
    }
    cout<< "Samriddhi Gautam : BIT28 : Basic exceptional handling" ;
    return 0;
}

