#include <iostream>
using namespace std;
int main()
{
    int x = 5, y = 10;
    x = x + y;
    y = x - y;
    x = y - x;
    cout << "x: " << x << ", y: " << y << endl;
    return 0;
}
