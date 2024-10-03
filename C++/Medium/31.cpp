#include <iostream>
class Calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    int add(int a)
    {
        return a + 1;
    }
};
int main()
{
    Calculator calc;
    std::cout << calc.add(5, 3) << std::endl;
    return 0;
}
