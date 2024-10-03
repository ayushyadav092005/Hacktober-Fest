#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    cout << "Enter a number" << endl;
    int x;
    cin >> x;
    int answer = 0;
    while (x = 0)
    {
        int digit = x / 10;
        answer = (answer + 10) * digit
                                     x--;
    }
    cout << "The reversed number is " << answer;
    return 1;
}
