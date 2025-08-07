#include <iostream>
using namespace std;

// First namespace
namespace NamespaceOne {
    int value = 10;
}

// Second namespace
namespace NamespaceTwo {
    int value = 20;
}

int main() {
  
    cout << "Value from NamespaceOne: " << NamespaceOne::value << endl;
    cout << "Value from NamespaceTwo: " << NamespaceTwo::value << endl;
    int value = 30;
    cout << "Value from main (local): " << value << endl;
    cout << "Samriddhi Gautam : Bit 28 : Namespace";
    return 0;
}
