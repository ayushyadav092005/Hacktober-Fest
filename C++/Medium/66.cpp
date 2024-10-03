#include <iostream>
using namespace std;
void recurse(int i)
{
    cout << i << endl;
    recurse(i);
}
int main()
{
    int i = 11;
    recurse(i);
    return 0;
}
