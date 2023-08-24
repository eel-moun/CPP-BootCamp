#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    const Animal* test[4] = {new Dog(), new Dog, new Cat(), new Cat()};
    int i =0;
    while (i < 4)
    {
        std::cout << std::endl;
        delete test[i];
        i++;
    }
return 0;
}