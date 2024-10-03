#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    << "Accessing valid array indices: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }
    cout << "\nAccessing invalid array index: " << endl;
    cout << "arr[5] = " << arr[5] << " (Invalid index)" << endl;
    cout << "arr[-1] = " << arr[-1] << " (Invalid index)" << endl;
    return 0;
}
