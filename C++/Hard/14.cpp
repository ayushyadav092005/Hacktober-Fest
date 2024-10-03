#include <iostream>
#include <memory>

class Dummy {
public:
    int value;
    Dummy(int v) : value(v) {
        std::cout << "Dummy constructed with value: " << value << std::endl;
    }
    ~Dummy() {
        std::cout << "Dummy destroyed with value: " << value << std::endl;
    }
};

void leakMemory() {
    std::unique_ptr<Dummy> ptr1 = std::make_unique<Dummy>(10);
    std::unique_ptr<Dummy> ptr2 = ptr1;  
}

int main() {
    leakMemory();  
    return 0;
}
