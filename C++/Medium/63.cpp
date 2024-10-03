#include <iostream>
int main()
{
    int day = 2;
    switch (day)
    {
    case 1:
        std::cout << "Monday" << std::endl;
    case 2:
        std::cout << "Tuesday" << std::endl;
    default:
        std::cout << "Unknown" << std::endl;
    }
    return 0;
}
