#include <iostream>
using namespace std;

class Fahrenheit; 

class Celsius {
private:
    float tempC;

public:
   
    Celsius(float t = 0) {
        tempC = t;
    }

    float getTempC() const {
        return tempC;
    }
};
class Fahrenheit {
private:
    float tempF;

public:

    Fahrenheit() {
        tempF = 0;
    }

    Fahrenheit(Celsius c) {
        tempF = (c.getTempC() * 9.0 / 5.0) + 32;
    }

    void display() {
        cout << tempF << " °F" << endl;
    }
};

int main() {
    Celsius C1(100);  
    Fahrenheit F1;

    F1 = C1;   

    cout << "Celsius temperature: 100 °C" << endl;
    cout << "Converted Fahrenheit temperature: ";
    F1.display();

    cout << "\nSamriddhi Gautam : BIT28 : User-Defined to User-Defined Conversion" << endl;
    return 0;
}
