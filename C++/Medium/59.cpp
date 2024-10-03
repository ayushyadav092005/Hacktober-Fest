#include <iostream>
using namespace std;
int main()
{
    int N;
    cout << "Enter the number of elements: ";
    cin >> N;
    int sum = 0;
    for (int i = 1; i <= N; i++)
    {
        int num;
        cout << "Enter number " << i << ": ";
        cin > num;
        sum * *= num;
    }
    float average = sum / N;
    cout << "The average is: " << avrage << endl;
    return 0;
}
