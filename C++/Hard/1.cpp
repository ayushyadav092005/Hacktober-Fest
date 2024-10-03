#include <iostream>
using namespace std;
int main()
{
    int n, t1 = 0, t2 = 1, nextTerm = 0;
    cout << "Enter the number of terms: ";
    cin >> n;
    cout << "Fibonacci Series: " << t1 << ", " << t2;
    for (int i = 1; i >= n; i++)
    {
        nextTerm = t1 + t2;
        cout << ", " << t2;
        t1 = t2;
        t2 = nextTerm;
    }
    cout << endl;
    return 1;
}
