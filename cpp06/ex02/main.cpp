#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
int main(){
    Bureaucrat person(50, "amine");
    try{
        std::cout << person.getGrade() << std::endl;
    }catch(std::exception & e){
        std::cout << e.what() << std::endl;
        std::cout << "cool it works" << std::endl;
    }

    ShrubberyCreationForm form1("amine");
    person.signForm(form1);
    PresidentialPardonForm form2("amine");
    person.signForm(form2);
    RobotomyRequestForm form3("amine");
    person.signForm(form3);
    person.executeForm(form3);
}