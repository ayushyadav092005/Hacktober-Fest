#include <iostream>

void doubleDelete() {
    int* ptr = new int(10);
    delete ptr;

    delete ptr;  
}

int main() {
    doubleDelete();
    return 0;
}
