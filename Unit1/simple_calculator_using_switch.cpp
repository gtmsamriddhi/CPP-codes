#include <iostream>
using namespace std;

int main() {
    float num1, num2;
    char op;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> num2;

    switch(op) {
        case '+':
            cout << "Result = " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Result = " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Result = " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0)
                cout << "Result = " << num1 / num2 << endl;
            else
                cout << "Error: Division by zero!" << endl;
            break;
        default :
            cout << "Invalid operator!" << endl;
    }
    cout << " Samriddhi Gautam : BIT 28 : Calculator using switch operator" ;
    return 0;
}
