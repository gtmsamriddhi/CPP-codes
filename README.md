# Cpp-codes
This repo contains the C++ programs starting from beginner-level concepts to advance topics
Here is a quick reference for Object-Oriented Programming in C++

---

## OOP Concepts

* **Class**: Blueprint for creating objects
* **Object**: Instance of a class
* **Encapsulation**: Keeping data and methods together
* **Abstraction**: Hiding implementation details
* **Inheritance**: One class inherits from another
* **Polymorphism**: Many forms — method overloading or overriding

---

## Class and Object

```
class MyClass {
public:
    int value;

    void sayHello() {
        cout << "Hello!";
    }
};

int main() {
    MyClass obj;
    obj.value = 5;
    obj.sayHello();
}
```

---

## Access Specifiers

```
class Example {
public:
    int a;       // accessible anywhere

protected:
    int b;       // accessible in this class and subclasses

private:
    int c;       // accessible only in this class
};
```

---

## Constructors and Destructors

```
class Test {
public:
    Test() {
        cout << "Constructor";
    }

    ~Test() {
        cout << "Destructor";
    }
};
```

Parameterized constructor:

```
Test(int x) {
    this->x = x;
}
```

---

## Inheritance

```
class Animal {
public:
    void speak() {
        cout << "Animal sound";
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Woof!";
    }
};
```

---

## Polymorphism

**Function Overloading**

```
class Print {
public:
    void show(int x);
    void show(double y);
};
```

**Function Overriding**

```
class Base {
public:
    virtual void display() {
        cout << "Base";
    }
};

class Derived : public Base {
public:
    void display() override {
        cout << "Derived";
    }
};
```

---

## Abstraction (Interface-like)

```
class Interface {
public:
    virtual void doSomething() = 0; // pure virtual function
};
```

---

## Encapsulation

```
class BankAccount {
private:
    double balance;

public:
    void deposit(double amount);
    double getBalance() const;
};
```

---

## this Pointer

```
class Demo {
    int x;
public:
    Demo(int x) {
        this->x = x;
    }
};
```

---

## Smart Pointers (C++11 and above)

```
#include <memory>

unique_ptr<MyClass> ptr1 = make_unique<MyClass>();
shared_ptr<MyClass> ptr2 = make_shared<MyClass>();
```

---

## Best Practices

* Use `const` where possible
* Use `override` for overridden methods
* Prefer composition over inheritance
* Make destructors `virtual` in base classes
* Use smart pointers instead of raw pointers
