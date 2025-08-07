#include <iostream>
#include <string>
using namespace std;

int main() {
    int value;

    cout << "Enter an integer value: ";
    cin >> value;

    try {
        if (value == 0) {
            // Throwing integer for zero input
            throw 0;
        }
        else if (value < 0) {
            // Throwing string for negative input
            throw string("Error: Negative value is not allowed.");
        }
        else if (value > 100) {
            // Throwing float for value greater than 100
            throw 100.1f;
        }

        // If input is valid
        cout << "Valid input: " << value << endl;
    }

    // Handling integer exception
    catch (int e) {
        cout << "Caught integer exception: Input was zero." << endl;
    }

    // Handling string exception
    catch (string msg) {
        cout << "Caught string exception: " << msg << endl;
    }

    // Handling float exception
    catch (float f) {
        cout << "Caught float exception: Value is greater than 100." << endl;
    }
    cout << "Samriddhi Gautam : BIT28 : Multiple catch statements" ;
    return 0;
}
