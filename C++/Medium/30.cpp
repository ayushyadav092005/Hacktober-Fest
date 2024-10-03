#include <iostream>
#include <string>
class Animal
{
public:
    virtual void speak()
    {
        std::cout << "Animal speaks" << std::endl;
    }
};
class Dog : public Animal
{
public:
    void speak(std::string sound)
    {
        std::cout << sound << std::endl;
    }
};
int main()
{
    Dog dog;
    dog.speak();
    return 0;
}
