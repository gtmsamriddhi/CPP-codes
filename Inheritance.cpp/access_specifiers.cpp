#include <iostream>
using namespace std;

class Vehicle {
private:
    int privateVar;      // Only accessible within Vehicle

protected:
    int protectedVar;    // Accessible within Vehicle and derived classes

public:
    int publicVar;       // Accessible everywhere

    Vehicle() {
        privateVar = 10;
        protectedVar = 20;
        publicVar = 30;
    }

    void showVehicle() {
        cout << "Vehicle privateVar: " << privateVar << endl;
        cout << "Vehicle protectedVar: " << protectedVar << endl;
        cout << "Vehicle publicVar: " << publicVar << endl;
    }
};

class Car : public Vehicle {
public:
    void showCar() {
       
        cout << "Car protectedVar (inherited): " << protectedVar << endl; 
        cout << "Car publicVar (inherited): " << publicVar << endl;       
    }
};

int main() {
    Vehicle v;
    Car c;

    cout << "Accessing members from Vehicle object:" << endl;
    v.showVehicle();

    cout << "\nAccessing members from Car object:" << endl;
    c.showCar();

    cout << "\nAccessing public member from main using Car object:" << endl;
    cout << "Car publicVar: " << c.publicVar << endl;

    cout << "\nSamriddhi Gautam : BIT28 : Access Specifiers in Inheritance" << endl;
    return 0;
}
