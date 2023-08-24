#ifndef AMATERIA_HPP
#define AMATERIA_HPP
#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria {
    protected:
        std::string type;
    
    public:
        AMateria();
        AMateria(AMateria const & mater);
        AMateria(std::string const & type);
        virtual ~AMateria();
        
        AMateria& operator = (AMateria const& mater);

        std::string const& getType() const;

        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif