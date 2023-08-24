#include "Intern.hpp"

Intern::Intern(){
    std::cout << "Intern default constructor called" << std::endl;
}

Intern::Intern(Intern& intern){
    std::cout << "Intern copy constructor called" << std::endl;
    (void) intern;
}

Intern::~Intern(){
    std::cout << "Intern destructor called" << std::endl;
}

Intern& Intern::operator =(Intern& intern){
    std::cout << "Intern copy assignement op called" << std::endl;
    (void) intern;
    return *this;
}

AForm* Intern::makeForm(std::string name, std::string target){
    std::string forms[3] = {"shrubbery creation", "robotomy request","presidential pardon"};
    int i = 0;
    while(i < 3 && forms[i]!= name)
        i++;
    switch (i)
    {
    case 0:
        std::cout << "Intern creates" << "shrubbery form" << std::endl;
        return (new ShrubberyCreationForm(target));
        break;
    case 1:
        std::cout << "Intern creates" << "robotomy form" << std::endl;
        return (new RobotomyRequestForm(target));
        break;
    case 2:
        std::cout << "Intern creates" << "presidential pardon form" << std::endl;
        return (new PresidentialPardonForm(target));
        break;
    default:
        std::cout << "form name doesn't exist" <<std::endl;
        return NULL;
    }
}