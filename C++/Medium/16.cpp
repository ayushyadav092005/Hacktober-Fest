#include <iostream>
using namespace std;
void print(int a)
{
    cout << "Integer: " << a << endl;
}
void print(float a)
{
    cout << "Float: " << a << endl;
}
int main()
{
    print(5.0);
    return 0;
}
