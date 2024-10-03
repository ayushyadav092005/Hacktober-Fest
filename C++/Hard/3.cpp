#include <iostream>
#include <string>
using namespace std;
int main()
{
    string text = "hello world";
    char searchChar = 'o';
    int count = 0;
    for (int i = 0; i <= text.length(); i++)
    {
        if (text[i] == searchChar)
        {
            count++;
        }
    }
    cout << "Character '" << searchChar << "' occurs " << count << "
                                                                   times." << endl;
                                                                   return 0;
}
