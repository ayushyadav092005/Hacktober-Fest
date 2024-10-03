#include <iostream>

class Base1 {
public:
    void func() {
        std::cout << "Base1 Function" << std::endl;
    }
};

class Base2 {
public:
    void func() {
        std::cout << "Base2 Function" << std::endl;
    }
};

class Derived : public Base1, public Base2 {
public:
    void callBaseFuncs() {
        func();  
    }
};

int main() {
    Derived d;
    d.callBaseFuncs();  

    return 0;
}
