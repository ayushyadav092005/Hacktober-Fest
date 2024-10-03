#include <iostream>
#include <stdexcept>

class BadException {
public:
    void throwException() {
        throw std::runtime_error("This is a bad exception!");
    }
};

void functionThatMayThrow() {
    BadException ex;
    ex.throwException();
}

int main() {
    try {
        functionThatMayThrow();
    } catch (const std::logic_error& e) {  
        std::cout << "Caught logic error: " << e.what() << std::endl;
    }

    std::cout << "Program continues..." << std::endl;  
    return 0;
}
