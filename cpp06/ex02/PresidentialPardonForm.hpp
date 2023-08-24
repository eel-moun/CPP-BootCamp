#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP
#include "AForm.hpp"

class PresidentialPardonForm:public AForm{
    private:
        const std::string target;
        PresidentialPardonForm();

    public:
        PresidentialPardonForm(PresidentialPardonForm& shrub);
        PresidentialPardonForm(const std::string& target);
        ~PresidentialPardonForm();

        PresidentialPardonForm& operator=(PresidentialPardonForm& president);

        void exec() const;
};
#endif