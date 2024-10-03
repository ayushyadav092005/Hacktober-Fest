#include <iostream>

class Base {
public:
    Base() { std::cout << "Base Constructor" << std::endl; }
    ~Base() { std::cout << "Base Destructor" << std::endl; }
    virtual void display() { std::cout << "Base Display" << std::endl; }
};

class Derived : public Base {
public:
    Derived() { std::cout << "Derived Constructor" << std::endl; }
    ~Derived() { std::cout << "Derived Destructor" << std::endl; }
    void display() override { std::cout << "Derived Display" << std::endl; }
};

void badFunction() {
    Base* basePtr = new Derived();
    basePtr->display();  
    
    delete basePtr;  
}

int main() {
    badFunction();
    return 0;
}
