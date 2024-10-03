#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < max)
        {
            max = arr[i];
        }
    }
    cout << "The maximum element is: " << max << endl;
    return 0;
}
