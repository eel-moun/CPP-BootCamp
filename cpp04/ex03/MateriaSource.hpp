#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP
#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource{
    private:
        AMateria* data[4];
        
    public:
        MateriaSource();
        MateriaSource(MateriaSource& src);
        ~MateriaSource();

        MateriaSource& operator = (MateriaSource& src);

        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);
};

#endif