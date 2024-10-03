#include <iostream>
#include <thread>
#include <vector>

class SharedData {
private:
    int data;

public:
    SharedData() : data(0) {}

    void increment() {
        for (int i = 0; i < 1000000; ++i) {
            data++;  
        }
    }

    int getData() const {
        return data;
    }
};

void threadFunc(SharedData& shared) {
    shared.increment();
}

int main() {
    SharedData shared;

    std::vector<std::thread> threads;

    for (int i = 0; i < 10; ++i) {
        threads.push_back(std::thread(threadFunc, std::ref(shared)));
    }

    for (auto& th : threads) {
        th.join();
    }

    std::cout << "Final data value: " << shared.getData() << std::endl;  

    return 0;
}
