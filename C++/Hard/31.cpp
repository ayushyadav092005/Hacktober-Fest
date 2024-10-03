#include <iostream>

class LeakyClass {
public:
    int* data;

    LeakyClass() {
        data = new int[10];  
    }
    
    
};

int main() {
    LeakyClass lc;

    return 0;  
}
