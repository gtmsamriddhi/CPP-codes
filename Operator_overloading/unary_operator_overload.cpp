#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    
    Number(int v = 0) {
        value = v;
    }

    // Unary minus operator overloading
    Number operator-() {
        return Number(-value);
    }


    // Prefix increment
    Number operator++() {
        ++value;
        return *this;
    }

    // Postfix increment
    Number operator++(int) {
        Number temp = *this;
        value++;
        return temp;
    }

    // Prefix decrement
    Number operator--() {
        --value;
        return *this;
    }

    // Postfix decrement
    Number operator--(int) {
        Number temp = *this;
        value--;
        return temp;
    }

    // Display function
    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Number n(5);

    cout << "Original value:\n";
    n.display();

    Number neg = -n;
    cout << "\nAfter unary minus:\n";
    neg.display();

    cout << "\nAfter prefix increment (++n):\n";
    ++n;
    n.display();

    cout << "\nAfter postfix increment (n++):\n";
    n++;
    n.display();

    cout << "\nAfter prefix decrement (--n):\n";
    --n;
    n.display();

    cout << "\nAfter postfix decrement (n--):\n";
    n--;
    n.display();
    cout << "\nSamriddhi Gautam : BIT28 : Unary Operator Overloading\n";

    return 0;
}
