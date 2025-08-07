#include <iostream>
using namespace std;
template <typename T>
class Array {
protected:
    T* arr;
    int size;

public:
    Array(int s) {
        size = s;
        arr = new T[size];
    }

    void inputElements() {
        cout << "Enter " << size << " elements:\n";
        for (int i = 0; i < size; ++i) {
            cout << "Element " << i + 1 << ": ";
            cin >> arr[i];
        }
    }

    void displayElements() {
        cout << "Array Elements: ";
        for (int i = 0; i < size; ++i)
            cout << arr[i] << " ";
        cout << endl;
    }

    ~Array() {
        delete[] arr;
    }
};

template <typename T>
class SumArray : public Array<T> {
public:
    SumArray(int s) : Array<T>(s) {}

    T calculateSum() {
        T sum = 0;
        for (int i = 0; i < this->size; ++i)
            sum += this->arr[i];
        return sum;
    }
};

int main() {
    cout << "Int Array:\n";
    SumArray<int> intArr(3);
    intArr.inputElements();
    intArr.displayElements();
    cout << "Sum: " << intArr.calculateSum() << endl;

    cout << "\nFloat Array:\n";
    SumArray<float> floatArr(3);
    floatArr.inputElements();
    floatArr.displayElements();
    cout << "Sum: " << floatArr.calculateSum() << endl;

    cout <<"Samriddhi Gautam : BIT28 :  Templates with inheritance";
    return 0;
}
