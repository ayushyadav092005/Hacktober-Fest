#include <iostream>

class ShallowCopy {
public:
    int* data;

    ShallowCopy(int value) {
        data = new int(value);
    }

    
    ShallowCopy(const ShallowCopy& other) {
        data = other.data;  
    }

    ~ShallowCopy() {
        delete data;
    }
};

int main() {
    ShallowCopy obj1(10);
    ShallowCopy obj2 = obj1;  

    return 0;  
}
