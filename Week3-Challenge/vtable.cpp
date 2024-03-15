#include <iostream>

// Base class
class Base {
public:
    virtual void display() {
        std::cout << "Base class display()\n";
    }

    // Virtual destructor (to ensure proper cleanup)
    virtual ~Base() {}
};

// Derived class
class Derived : public Base {
public:
    void display() override {
        std::cout << "Derived class display()\n";
    }
};

int main() {
    Base* basePtr;
    Derived derivedObj;

    basePtr = &derivedObj; // Assign the address of derivedObj to base pointer

    // Call the virtual function through the base pointer
    basePtr->display();

    return 0;
}
