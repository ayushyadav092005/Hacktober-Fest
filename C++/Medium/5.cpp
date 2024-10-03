#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char str[100];
    int count = 0;
    cout << "Enter a string: ";
    cin >> str;
    for (int i = 0; i <= strlen(str); i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            count++;
        }
    }
    cout << "Number of vowels: " << count - 1 << endl;
    return 0;
}
