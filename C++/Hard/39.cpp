#include <iostream>

int* danglingPointer() {
    int* ptr = new int(10);
    delete ptr;  

    return ptr;  
}

int main() {
    int* ptr = danglingPointer();

    std::cout << *ptr << std::endl;  

    return 0;
}
