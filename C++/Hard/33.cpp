#include <iostream>

int& getReferenceToLocal() {
    int localVar = 42;
    return localVar;  
}

int main() {
    int& ref = getReferenceToLocal();
    std::cout << ref << std::endl;  

    return 0;
}
