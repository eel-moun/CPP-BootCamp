#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm& president): AForm("PresidentialPardonForm",25,5),target(president.target){
    std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target):AForm("PresidentialPardonForm",25,5),target(target){
    std::cout << "PresidentialPardonForm constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(){
    std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator= (PresidentialPardonForm& president){
    (void) president;
    return *this;
}

void PresidentialPardonForm::exec() const{
    std::cout << target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
