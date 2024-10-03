#include <iostream>
using namespace std;
void addNumbers(int a, int b)
{
    int sum = a + b;
    return sum;
}
int main()
{
    int result = addNumbers(5, 10);
    cout << "Result: " << result << endl;
    return 0;
}
