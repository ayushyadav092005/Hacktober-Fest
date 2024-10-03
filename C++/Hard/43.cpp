#include <iostream>
void infinite_recursion(int n)
{
    infinite_recursion(n + 1);
}
int main()
{
    infinite_recursion(0);
    return 0;
}
