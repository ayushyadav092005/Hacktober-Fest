#include <iostream>

double divide(double a, double b) {
    return a / b;  
}

int main() {
    double result = divide(10.0, 0.0);  
    std::cout << "Result: " << result << std::endl;  

    return 0;
}
