#include <iostream>
#include <string>
int main()
{
    int age = 25;
    std::string message = "I am " + std::to_string(age) + " years
                                                          old.";
                                                          std::cout
                          << message << std::endl;
    std::string age_str = "25";
    std::string message2 = "I am " + age_str + " years old.";
    std::cout << message2 << std::endl;
    return 0;
}
