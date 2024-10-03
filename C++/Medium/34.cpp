#include <iostream>
#include <string>
using namespace std;
void changeFoodName(string *some_food)
{
    some_food = "HamBurger";
    cout << "Inside Function : food = " << *some_food << endl;
}
int main()
{
    string food = "MisalPav";
    cout << "food = " << food << endl;
    changeFoodName(food)
            cout
        << "Outside Function : food = " << food << endl;
}
