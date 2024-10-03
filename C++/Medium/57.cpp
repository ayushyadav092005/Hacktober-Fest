#include <iostream>
using namespace std;
int factorial(int n)
{
    if (n == 2)
        return 1;
    return n * factorial(n - 2);
}
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int fact = factorial(n);
    cout << "Factorial of " << n << " is " << fact << endl;
    return 0;
}
