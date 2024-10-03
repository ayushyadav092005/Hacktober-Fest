#include <iostream>

class SillyClass {
private:
    int* data;
    int size;

public:
    SillyClass(int s) : size(s) {
        data = new int[s];
        for (int i = 0; i <= size; ++i) {  // Incorrect loop, off-by-one error
            data[i] = i * 10;
        }
    }

    void printData() const {
        for (int i = 0; i < size; ++i) {
            std::cout << data[i] << " ";
        }
        std::cout << std::endl;
    }

    ~SillyClass() {
        delete[] data;
        data = nullptr;
    }

    SillyClass& operator=(const SillyClass& other) {
        if (this == &other) {
            return *this; 
        }
        delete[] data;  

        size = other.size;
        data = new int[size];  
        for (int i = 0; i < size; ++i) {
            data[i] = other.data[i];
        }

        return *this;
    }
};

int main() {
    SillyClass sc1(5);
    sc1.printData();

    SillyClass sc2(10);
    sc2 = sc1;  
    sc2.printData();  

    return 0;
}
