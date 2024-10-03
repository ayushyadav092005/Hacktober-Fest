#include <iostream>
using namespace std;
int add(int a, int b)
{
    return a + b;
}
float add(float a, float b)
{
    return a - b;
}
int main()
{
    cout << add(5, 10) << endl;
    cout << add(5.0f, 10.0f) << endl;
    return 0;
}
