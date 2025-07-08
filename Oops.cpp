// Clean & Efficient C++ OOP Concepts with Comments
#include<bits/stdc++.h>
using namespace std;

// 1. CLASS and OBJECT: Basic structure bundling data and functions
class Car {
public:
    string brand;
    int speed;

    void showDetails() {
        cout << "[Class & Object] Brand: " << brand << ", Speed: " << speed << " km/h" << endl;
    }
};

// 2. ENCAPSULATION: Binding data and methods with access control
class BankAccount {
private:
    int balance;

public:
    void setBalance(int b) {
        balance = (b >= 0) ? b : 0;
    }
    int getBalance() {
        return balance;
    }
};

// 3. CONSTRUCTOR: Automatically called during object creation
class Student {
public:
    string name;
    int age;

    Student(string n, int a) : name(n), age(a) {}

    void show() {
        cout << "[Constructor] Name: " << name << ", Age: " << age << endl;
    }
};

// 4. DESTRUCTOR: Automatically called on object destruction
class Demo {
public:
    Demo() {
        cout << "[Constructor] Demo created" << endl;
    }
    ~Demo() {
        cout << "[Destructor] Demo destroyed" << endl;
    }
};

// 5. COPY CONSTRUCTOR: Creates a new object as a copy of an existing one
class Box {
public:
    int length;

    Box(int len) : length(len) {}

    Box(const Box &b) : length(b.length) {}

    void show() {
        cout << "[Copy Constructor] Length: " << length << endl;
    }
};

// 6. SHALLOW vs DEEP COPY
class DeepCopy {
private:
    int *data;

public:
    DeepCopy(int val) {
        data = new int(val);
    }

    // Deep Copy Constructor (allocates new memory)
    DeepCopy(const DeepCopy &src) {
        data = new int(*src.data);
    }

    void show() {
        cout << "[Deep Copy] Value: " << *data << endl;
    }

    ~DeepCopy() {
        delete data;
    }
};

// 7. INHERITANCE: Code reuse using 'is-a' relationship
class Animal {
public:
    void eat() {
        cout << "[Inheritance] Eating..." << endl;
    }
};

// Single Inheritance
class Dog : public Animal {
public:
    void bark() {
        cout << "[Inheritance] Barking..." << endl;
    }
};

// Multilevel Inheritance
class Puppy : public Dog {
public:
    void weep() {
        cout << "[Inheritance] Weeping..." << endl;
    }
};

// 8. POLYMORPHISM: Function overloading (compile-time)
class Poly {
public:
    void func(int x) {
        cout << "[Polymorphism] Integer: " << x << endl;
    }

    void func(double x) {
        cout << "[Polymorphism] Double: " << x << endl;
    }
};

// 9. FUNCTION OVERRIDING: Runtime polymorphism using same function name
class Base {
public:
    void show() {
        cout << "[Overriding] Base class" << endl;
    }
};

class Derived : public Base {
public:
    void show() {
        cout << "[Overriding] Derived class" << endl;
    }
};

// 10. VIRTUAL FUNCTION: Enables dynamic dispatch for base pointer
class VBase {
public:
    virtual void display() {
        cout << "[Virtual] Base Display" << endl;
    }
};

class VDerived : public VBase {
public:
    void display() override {
        cout << "[Virtual] Derived Display" << endl;
    }
};

// 11. ABSTRACTION: Hiding implementation using abstract (interface-like) class
class AbstractDevice {
public:
    virtual void operate() = 0; // Pure virtual function
};

class Printer : public AbstractDevice {
public:
    void operate() override {
        cout << "[Abstract] Printer is operating..." << endl;
    }
};

// 12. STATIC Keyword: Shared among all objects
class Counter {
public:
    static int count;

    Counter() {
        ++count;
    }

    static void showCount() {
        cout << "[Static] Count: " << count << endl;
    }
};

int Counter::count = 0; // Definition outside class

// ------------------
// MAIN FUNCTION
// ------------------
int main() {
    // Class and Object
    Car c;
    c.brand = "Tesla";
    c.speed = 250;
    c.showDetails();

    // Encapsulation
    BankAccount acc;
    acc.setBalance(1200);
    cout << "[Encapsulation] Balance: Rs. " << acc.getBalance() << endl;

    // Constructor
    Student s("Madhav", 19);
    s.show();

    // Destructor
    Demo d;

    // Copy Constructor
    Box b1(10);
    Box b2 = b1;
    b2.show();

    // Deep Copy
    DeepCopy dc1(200);
    DeepCopy dc2 = dc1;
    dc2.show();

    // Inheritance
    Puppy pup;
    pup.eat();
    pup.bark();
    pup.weep();

    // Polymorphism - Overloading
    Poly p;
    p.func(42);
    p.func(3.14);

    // Function Overriding
    Derived d1;
    d1.show();

    // Virtual Function
    VBase* vb = new VDerived();
    vb->display();
    delete vb;

    // Abstraction
    Printer pr;
    pr.operate();

    // Static
    Counter c1, c2, c3;
    Counter::showCount();

    return 0;
}
