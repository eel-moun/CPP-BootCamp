#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Dog:public Animal{
    private:
        Brain* DogBrain;
    public:
        Dog();
        Dog(const Dog& dog);
        ~Dog();
        Dog& operator = (const Dog& dog);
        void makeSound() const;
};

#endif