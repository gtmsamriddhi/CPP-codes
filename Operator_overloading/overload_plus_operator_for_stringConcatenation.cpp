#include <iostream>
#include <cstring>  // For strcpy, strcat
using namespace std;

class MyString {
private:
    char str[100];  

public:
   
    MyString() {
        str[0] = '\0';  
    }

    MyString(const char* s) {
        strcpy(str, s);
    }

   
    MyString operator+(const MyString& s) {
        MyString temp;
        strcpy(temp.str, str);      
        strcat(temp.str, s.str);   
        return temp;
    }

    
    void display() {
        cout << str << endl;
    }
};

int main() {
    MyString s1("Hello, ");
    MyString s2("World!");

    MyString s3 = s1 + s2;  

    cout << "Concatenated String: ";
    s3.display();
    cout << "\nSamriddhi Gautam : BIT28 : Overloading + Operator for String Concatenation" << endl;

    return 0;
}
