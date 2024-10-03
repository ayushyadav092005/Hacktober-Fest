#include <iostream>

void useUninitializedVariable() {
    int* arr = new int[5];  

    for (int i = 0; i < 5; ++i) {
        std::cout << arr[i] << " ";  
    }
    std::cout << std::endl;

    delete[] arr;
}

int main() {
    useUninitializedVariable();
    return 0;
}
