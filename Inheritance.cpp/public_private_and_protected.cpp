#include <iostream>
using namespace std;

class Employee {
public:
    int publicData;

protected:
    int protectedData;

private:
    int privateData;

public:
    Employee() {// Accessible as private no
        publicData = 100;
        protectedData = 200;
        privateData = 300;
    }

    void show() {
        cout << "Employee publicData: " << publicData << endl;
        cout << "Employee protectedData: " << protectedData << endl;
        cout << "Employee privateData: " << privateData << endl;
    }
};

// Public inheritance
class ManagerPublic : public Employee {
public:
    void access() {
        cout << "[Public Inheritance]" << endl;
        cout << "publicData: " << publicData << endl;       // Accessible
        cout << "protectedData: " << protectedData << endl; // Accessible
        // cout << "privateData: " << privateData << endl;  // Not accessible
    }
};

// Protected inheritance
class ManagerProtected : protected Employee {
public:
    void access() {
        cout << "[Protected Inheritance]" << endl;
        cout << "publicData: " << publicData << endl;       // Accessible as protected now
        cout << "protectedData: " << protectedData << endl; // Accessible
       
    }
};

// Private inheritance
class ManagerPrivate : private Employee {
public:
    void access() {
        cout << "[Private Inheritance]" << endl;
        cout << "publicData: " << publicData << endl;       
        cout << "protectedData: " << protectedData << endl; // Accessible as private now
        
    }
};

int main() {
    ManagerPublic mp;
    ManagerProtected mpr;
    ManagerPrivate mprv;

    cout << "Public Inheritance Access:" << endl;
    mp.access();
    cout << "Outside access: mp.publicData = " << mp.publicData << endl; 
    cout << "\nProtected Inheritance Access:" << endl;
    mpr.access();
 

    cout << "\nPrivate Inheritance Access:" << endl;
    mprv.access();
    
    cout << "\nSamriddhi Gautam : BIT28 : Inheritance Access Specifiers" << endl;

    return 0;
}
