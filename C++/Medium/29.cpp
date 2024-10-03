#include <iostream>
using namespace std;
int *getValue()
{
    int value = 10;
    return &value;
}
int main()
{
    cout << "Value Address : " << getValue() << endl;
}
