#include <iostream>
using namespace std;
int main() bool a = true;
bool b = false;
cout << "a && b: " << (a && b) << endl;
cout << "a || b: " << (a || b) << endl;
cout << "!a: " << (!a) << endl;
cout << "!b: " << (!b) << endl;
bool c = (a && !b) || (b && a);
cout << "(a && !b) || (b && a): " << c << endl;
return 0;
}
