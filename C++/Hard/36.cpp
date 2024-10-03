#include <iostream>

class MemoryLeak {
public:
    int* data;

    MemoryLeak(int value) {
        data = new int(value);  
    }

    
    MemoryLeak(const MemoryLeak& other) {
        data = new int(*other.data);  
    }

    ~MemoryLeak() {
        delete data;
    }
};

int main() {
    MemoryLeak obj1(10);
    MemoryLeak obj2 = obj1;  

    return 0;  
}
