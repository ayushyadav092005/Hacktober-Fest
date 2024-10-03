#include <iostream>

class MyClass {
public:
    MyClass() {
        std::cout << "MyClass Constructor" << std::endl;
    }

    ~MyClass() {
        std::cout << "MyClass Destructor" << std::endl;
    }
};

void deleteAndUse() {
    MyClass* obj = new MyClass();
    delete obj;

    std::cout << "Accessing deleted object" << std::endl;
    obj->~MyClass();  
}

int main() {
    deleteAndUse();
    return 0;
}
