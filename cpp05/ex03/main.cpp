#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"
int main(){
    Bureaucrat person(4, "amine");
    try{
        std::cout << person.getGrade() << std::endl;
    }catch(std::exception & e){
        std::cout << e.what() << std::endl;
        std::cout << "cool it works" << std::endl;
    }

    ShrubberyCreationForm form1("amine");
    person.signForm(form1);
    form1.execute(person);
    PresidentialPardonForm form2("amine");
    person.signForm(form2);
    form2.execute(person);
    RobotomyRequestForm form3("amine");
    person.signForm(form3);
    form3.execute(person);

    {
        Intern someRandomIntern;
        AForm* rrf;
        rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    }
}