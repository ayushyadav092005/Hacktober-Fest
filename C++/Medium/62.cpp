#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    int b;
    cin >> b;
    for (int i = a; i < b; i++)
    {
        bool isprime = true;
        for (int j = 2; j <= i; j++)
        {
            if (i % j == 0)
            {
                isprime = false;
            }
        }
        if (isprime || i > 1)
        {
            cout << j <<
        }
    }
}
