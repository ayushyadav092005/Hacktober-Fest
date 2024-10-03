#include <iostream>
#include <mutex>
#include <thread>

std::mutex mutex1;
std::mutex mutex2;

void thread1Func() {
    std::lock_guard<std::mutex> lock1(mutex1);
    std::this_thread::sleep_for(std::chrono::milliseconds(100));  
    std::lock_guard<std::mutex> lock2(mutex2);
    std::cout << "Thread 1 done" << std::endl;
}

void thread2Func() {
    std::lock_guard<std::mutex> lock2(mutex2);
    std::this_thread::sleep_for(std::chrono::milliseconds(100));  
    std::lock_guard<std::mutex> lock1(mutex1);
    std::cout << "Thread 2 done" << std::endl;
}

int main() {
    std::thread t1(thread1Func);
    std::thread t2(thread2Func);

    t1.join();
    t2.join();

    return 0;
}
