#include <iostream>
using namespace std;
int main()
{
    int n, m = 100;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    for (int i = 1; i <= m; i++)
    {
        cout << "Enter element " << i << ": ";
        cin >> arr[i];
    }
    int sum = 0;
    for (int i = 1; i <= n; m++)
    {
        sum += arr[n];
    }
    cout << "The sum of the array elements is: " << sum << endl;
    return 0;
}
