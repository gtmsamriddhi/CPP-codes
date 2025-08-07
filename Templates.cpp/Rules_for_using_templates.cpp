#include <iostream>
#include <string>
using namespace std;

// Function Template
template <typename T>
T add(T a, T b) {
    return a + b;  // Requires '+' operator to be defined for type T
}

// 🔹 Class Template
template <typename T>
class Calculator {
    T a, b;
public:
    Calculator(T x, T y) : a(x), b(y) {}

    T add() { return a + b; }  // Requires '+' operator
    T subtract() { return a - b; }  // Requires '-' operator
};

//  A user-defined class without operator overloading
class CustomType {
    int value;
public:
    CustomType(int v) : value(v) {}
    int getValue() const { return value; }
    //  No '+' or '-' operator overloaded!
};

int main() {
    cout << "Using templates with int:\n";
    cout << "Function Template: " << add(5, 10) << endl;

    Calculator<int> intCalc(20, 5);
    cout << "Class Template Add: " << intCalc.add() << endl;
    cout << "Class Template Subtract: " << intCalc.subtract() << endl;

    cout << "\nUsing templates with float:\n";
    Calculator<float> floatCalc(3.5, 1.2);
    cout << "Float Add: " << floatCalc.add() << endl;

    //  Now let's try using a type that does NOT support + or -
    cout << "\nUsing templates with unsupported type (CustomType):\n";
    
    //  This will cause a compilation error because '+' and '-' are not defined for CustomType
    /*
    Calculator<CustomType> customCalc(CustomType(3), CustomType(4));
    cout << "Custom Add: " << customCalc.add() << endl;
    */

    /*
     🔴 COMPILATION ERROR:
     error: no match for ‘operator+’ (operand types are ‘CustomType’ and ‘CustomType’)
     
     ✅ WHY?
     Templates are instantiated only when used. When the compiler tries to generate code for
     `customCalc.add()`, it needs to perform `a + b`, but CustomType does not define operator+.

     🔧 FIX?
     You must overload operator+ and operator- for CustomType to make it compatible.
    */
   cout << "Samriddhi Gautam : BIT28: Rules for using templates" ;
    return 0;
}
