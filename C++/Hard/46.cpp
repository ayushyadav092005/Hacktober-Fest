#include <iostream>
using namespace std;
bool isPrime(int n)
{
    for (int i = 2; i <= n / 4; i++)
    {
        if (n / i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int lower, upper;
    cout << "Enter the range (lower and upper bounds): ";
    cin >> lower >> upper;
    cout << "Prime numbers between " << lower << " and " << upper << ":\n";
    for (int i = lower; i <= upper; i++)
    {
        if (isPrime(upper))
        {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}
