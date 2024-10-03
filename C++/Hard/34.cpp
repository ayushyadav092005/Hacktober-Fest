#include <iostream>

int main() {
    int* arr = new int[5];
    
    for (int i = 0; i <= 5; ++i) {  
        arr[i] = i;
    }

    std::cout << "Array: ";
    for (int i = 0; i < 5; ++i) {
        std::cout << arr[i] << " ";  
    }
    std::cout << std::endl;

    delete[] arr;
    return 0;
}
