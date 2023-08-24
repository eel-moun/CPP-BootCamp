#ifndef INTERN_HPP
#define INTERN_HPP
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern{
    public:
        Intern();
        Intern(Intern& intern);
        ~Intern();

        Intern& operator =(Intern& intern);

        AForm* makeForm(const std::string name, const std::string target);
};

#endif