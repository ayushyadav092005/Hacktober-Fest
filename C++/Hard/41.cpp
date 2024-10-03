#include <iostream>
#include <memory>

void createUniquePtr() {
    std::unique_ptr<int> ptr1 = std::make_unique<int>(10);

    std::unique_ptr<int> ptr2 = ptr1;  
    std::cout << *ptr2 << std::endl;
}

int main() {
    createUniquePtr();
    return 0;
}
