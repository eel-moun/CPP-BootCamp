#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm:public AForm{
    private:
        const std::string target;
        ShrubberyCreationForm();

    public:
        ShrubberyCreationForm(ShrubberyCreationForm& shrub);
        ShrubberyCreationForm(const std::string& target);
        ~ShrubberyCreationForm();

        ShrubberyCreationForm& operator=(ShrubberyCreationForm& shrub);

        void exec() const;
};
#endif