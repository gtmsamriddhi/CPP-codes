#include <iostream>
using namespace std;

template <typename T>
class Calculator {
private:
    T num1, num2;

public:
    
    Calculator(T a, T b) {
        num1 = a;
        num2 = b;
    }

    void add() {
        cout << "Addition: " << num1 + num2 << endl;
    }

    void subtract() {
        cout << "Subtraction: " << num1 - num2 << endl;
    }

    void multiply() {
        cout << "Multiplication: " << num1 * num2 << endl;
    }

    void divide() {
        if (num2 != 0)
            cout << "Division: " << num1 / num2 << endl;
        else
            cout << "Division by zero not allowed!" << endl;
    }
};

int main() {
    
    cout << "Integer Calculator:" << endl;
    Calculator<int> intCalc(10, 5);
    intCalc.add();
    intCalc.subtract();
    intCalc.multiply();
    intCalc.divide();

    cout << "\nFloat Calculator:" << endl;

    Calculator<float> floatCalc(10.5f, 2.5f);
    floatCalc.add();
    floatCalc.subtract();
    floatCalc.multiply();
    floatCalc.divide();
    
    cout <<"Samriddhi Gautam : BIT28 : Class Templates";
    return 0;
}


