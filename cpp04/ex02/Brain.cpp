#include "Brain.hpp"

Brain::Brain(){
    std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(Brain& brain){
    std::cout << "Brain copy constructor called" << std::endl;
    *this = brain;
}

Brain::~Brain(){
    std::cout << "Brain destructor called" << std::endl;
}

Brain& Brain::operator = (Brain& rhs){
    std::cout << "Brain copy assignement operator called" << std::endl;
    int i = 0;
    while(i < 100)
    {
        ideas[i] = rhs.ideas[i];
        i++;
    }
    return *this;
}