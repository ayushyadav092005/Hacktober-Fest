#include <iostream>

void createArray() {
    int* arr = new int[10];  

    for (int i = 0; i <= 10; ++i) {  
        arr[i] = i;
    }

    delete[] arr;  
}

int main() {
    createArray();
    return 0;
}
