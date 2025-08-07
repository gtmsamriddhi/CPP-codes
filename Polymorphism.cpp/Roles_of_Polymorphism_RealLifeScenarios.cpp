#include <iostream>
using namespace std;
class Payment {
public:
    virtual void processPayment() {
        cout << "Processing generic payment." << endl;
    }

   
    virtual ~Payment() {}
};


class CreditCard : public Payment {
public:
    void processPayment() override {
        cout << "Processing credit card payment." << endl;
    }
};


class Cash : public Payment {
public:
    void processPayment() override {
        cout << "Processing cash payment." << endl;
    }
};

void handlePayment(Payment* payment) {
    payment->processPayment();
}

int main() {
   
    CreditCard cc;
    Cash cash;

  
    Payment* p1 = &cc;
    Payment* p2 = &cash;

    handlePayment(p1);  
    handlePayment(p2);  

    cout << "Samriddhi Gautam : BIT28 : Roles of polymorphism in Real life scenarios" ;
    return 0;
}
