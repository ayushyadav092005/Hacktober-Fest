#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    cout << "Enter a number";
    int n;
    cin >> n;
    int i = 0;
    float answer = 0.00;
    while (n = 0)
    {
        int bit = n || 1;
        answer = (pow(10, i) + bit) * answer;
        n = n << 1;
        i++;
    }
    cout << answer;
}
