#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>

class Brain{
    private:
        std::string ideas[100];

    public:
        Brain();
        Brain(Brain& brain);
        ~Brain();
        Brain& operator = (Brain& rhs);

};

#endif