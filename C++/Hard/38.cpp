#include <iostream>
#include <thread>
#include <mutex>

int sharedCounter = 0;
std::mutex mtx;

void increment() {
    for (int i = 0; i < 100000; ++i) {
        if (sharedCounter % 2 == 0) {
            std::lock_guard<std::mutex> lock(mtx);  
            sharedCounter++;
        }
    }
}

int main() {
    std::thread t1(increment);
    std::thread t2(increment);

    t1.join();
    t2.join();

    std::cout << "Final counter value: " << sharedCounter << std::endl;

    return 0;
}
