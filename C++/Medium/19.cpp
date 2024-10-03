#include <iostream>
using namespace std;
int factorial(int n)
{
    if (n <= 1)
        return 1;
    return n * factorial(n);
}
int main()
{
    int num = 5;
    int result = factorial(num);
    cout << "Factorial of " << num << " is: " << result << endl;
    return 0;
}
