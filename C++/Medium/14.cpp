#include <iostream>
using namespace std;
void area(int radius)
{
    const float PI = 3.14;
    return PI * radius * radius;
}
void main()
{
    int radius = 10;
    cout << area(radius) << endl;
}
