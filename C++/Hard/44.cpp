#include <iostream>
#include <thread>
void thread_function()
{
}
int main()
{
    std::thread t(thread_function);
    t.join();
    std::thread t2(thread_function);
    t2.join();
    return 0;
}
