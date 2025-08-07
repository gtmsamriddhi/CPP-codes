#include <iostream>
using namespace std;

class Animal {
public:
    
    virtual void sound() {
        cout << "Some generic animal sound." << endl;
    }
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks: Woof! Woof!" << endl;
    }
};

class Cat : public Animal {
public:
    void sound() override {
        cout << "Cat meows: Meow! Meow!" << endl;
    }
};

int main() {
    Animal* animalPtr; 

    Dog dog;
    Cat cat;
    animalPtr = &dog;
    animalPtr->sound();  

    animalPtr = &cat;
    animalPtr->sound();  
    cout << "Samriddhi Gautam : BIT28 : Dynamic polymorphism";
    return 0;
}
