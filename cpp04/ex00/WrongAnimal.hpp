#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <iostream>

class WrongAnimal {
    protected:
        std::string type;
    
    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal& animal);
        virtual ~WrongAnimal();
        WrongAnimal& operator = (const WrongAnimal& animal);
        
        std::string getType() const;
        void setType(std::string type);
        
        void makeSound() const;
};

#endif