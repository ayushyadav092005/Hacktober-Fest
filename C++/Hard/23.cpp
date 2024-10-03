#include <iostream>

class ClassB;  

class ClassA {
public:
    ClassB* b;  

    void interactWithB();
};

class ClassB {
public:
    ClassA* a;  

    void interactWithA() {
        a->interactWithB();  
    }
};

void ClassA::interactWithB() {
    std::cout << "Interacting with B" << std::endl;
}

int main() {
    ClassA a;
    ClassB b;

    a.b = &b;
    b.a = &a;

    b.interactWithA();  

    return 0;
}
