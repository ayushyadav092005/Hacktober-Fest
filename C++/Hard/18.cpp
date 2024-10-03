#include <iostream>

int faultyRecursiveFunc(int n) {
    if (n < 0) {
        return 0;
    }
    return faultyRecursiveFunc(n - 1);  
}

int main() {
    int result = faultyRecursiveFunc(1000000);  
    std::cout << "Result: " << result << std::endl;

    return 0;
}
