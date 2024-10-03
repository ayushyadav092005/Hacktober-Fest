#include <iostream>
using namespace std;
int main()
{
    int x = 5;
    if (x > 3)
        if (x < 10)
            cout << "x is between 3 and 10" << endl;
        else
            cout << "x is greater than 10" << endl;
    return 0;
}
