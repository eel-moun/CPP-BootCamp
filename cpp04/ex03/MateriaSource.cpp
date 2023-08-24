#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){
    std::cout << "MateriaSource default constructor" << std::endl;
        for(int i = 0; i < 4; i++)
            data[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource& src){
    std::cout << "MateriaSource copy constructor called" << std::endl;
    *this = src;
}

MateriaSource::~MateriaSource(){
    std::cout << "IMateriaSource destructor called" << std::endl;
    int i = 0;

    while (i < 4)
    {
        if(data[i])
            delete data[i];
        i++;
    }
}

MateriaSource& MateriaSource::operator = (MateriaSource& src){
    std::cout << "MateriaSource copy assignement op called" << std::endl;
    int i = 0;

    while (i < 4)
    {
        if (this->data[i])
            delete this->data[i];
        i++;
    }
    i = 0;
    while (i < 4)
    {
        if (src.data[i])
            this->data[i] = src.data[i];
        i++;
    }
    return (*this);
}

void MateriaSource::learnMateria(AMateria* m){
    for (int i = 0; i <4; i++)
    {
        if(data[i] == NULL)
        {
            std::cout << "ok" <<std::endl;
            data[i] = m; 
            return ;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const & type){

    for (int i = 0; i <4; i++)
    {
        if(data[i] && data[i]->getType() == type)
            return data[i]->clone();
    }
    return NULL;
}