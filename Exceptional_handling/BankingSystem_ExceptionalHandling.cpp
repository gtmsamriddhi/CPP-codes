/*  Comprehensive Practical: Banking System Exception Handling
Write a C++ program to simulate a simple bank withdrawal system.
= Throw an exception if:
 .The withdrawal amount is greater than the balance.
 .The withdrawal amount is zero or negative.
 .Use multiple catch blocks to handle both exceptions.
 Also, demonstrate catching all exceptions using catch(...). */ 

 #include <iostream>
#include <string>
using namespace std;

int main() {
    double balance = 10000.0;  // Initial balance
    double withdrawAmount;

    cout << "Current Balance: Rs. " << balance << endl;
    cout << "Enter amount to withdraw: Rs. ";
    cin >> withdrawAmount;

    try {
        if (withdrawAmount <= 0) {
            throw string(" Withdrawal amount must be greater than zero.");
        }
        if (withdrawAmount > balance) {
            throw withdrawAmount;
        }

        // Successful withdrawal
        balance -= withdrawAmount;
        cout << " Withdrawal successful!" << endl;
        cout << "Remaining Balance: Rs. " << balance << endl;
    }
    catch (string msg) {
        cout << msg << endl;
    }
    catch (double amt) {
        cout << " Error: Cannot withdraw Rs. " << amt << ". Insufficient balance." << endl;
    }
    catch (...) {
        cout << " Unknown error occurred during withdrawal!" << endl;
    }
    cout << " Samriddhi Gautam : BIT28 : Banking exceptional handling" ;
    return 0;
}
