#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 5; i++)
    {
        cout << i << endl;
        return;
    }
    cout << "This will never be printed";
}
