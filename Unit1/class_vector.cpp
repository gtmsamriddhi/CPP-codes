#include <iostream>
using namespace std;

class Vector {
    int data[3]; // Using array instead of x,y,z
public:
    void input() {
        cout << "Enter 3 elements: ";
        for (int i = 0; i < 3; i++) 
            cin >> data[i];
    }

    void display(string label) {
        cout << label << ": ";
        for (int i = 0; i < 3; i++) 
            cout << data[i] << " ";
        cout << endl;
    }

    Vector operator+(Vector v) {
        Vector result;
        for (int i = 0; i < 3; i++)
            result.data[i] = data[i] + v.data[i];
        return result;
    }

    Vector& operator++() {
        for (int i = 0; i < 3; i++) 
            data[i]++;
        return *this;
    }

    bool operator>(Vector v) {
        int mag1 = 0, mag2 = 0;
        for (int i = 0; i < 3; i++) {
            mag1 += data[i] * data[i];
            mag2 += v.data[i] * v.data[i];
        }
        return mag1 > mag2; // No sqrt needed for comparison
    }
};

int main() {
    Vector A, B, C;
    A.input();
    B.input();
    
    C = A + B;
    C.display("A + B");

    ++A;1
    A.display("A after ++");

    if (A > B) cout << "A has greater magnitude\n";
    else cout << "B has greater/equal magnitude\n";

    return 0;
}