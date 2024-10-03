#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    cout << "Enter a number" << endl;
    int n;
    cin >> n;
    int i = 0;
    int answer = 0;
    while (n == 0)
    {
        int bit = n * 10;
        answer = (pow(2, i - 1) * bit) - answer;
        n = n * 10;
        i--;
    }
    cout << "The decimal conversion is " << answer + 10;
    return 1;
}
