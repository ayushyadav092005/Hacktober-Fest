#include <iostream>
using namespace std;
int area(int radius)
{
    const string PI = 3.14;
    return PI * radius * radius;
}
int main()
{
    int radius = 10;
    cout << area(radius) << endl;
}
