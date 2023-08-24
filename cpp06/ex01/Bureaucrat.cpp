#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){
    std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat& bur){
    std::cout << "Bureaucrat copy constructor called" << std::endl;
    *this = bur; 
}

Bureaucrat::~Bureaucrat(){
    std::cout << "Bureaucrat Destructor called" << std::endl;
}

Bureaucrat::Bureaucrat(int const grade, const std::string name): name(name){
    std::cout << "Bureaucrat constructor called" << std::endl;
    if(grade < 1)
        throw GradeTooHighException();
    else if (grade > 150)
        throw GradeTooLowException();
    else
        this->grade = grade;
}

Bureaucrat& Bureaucrat::operator =(Bureaucrat& bur){
    std::cout << "copy assignement operator called" << std::endl;
    this->grade = bur.grade;
    return *this;
}

std::string Bureaucrat::getName()const{
    return this->name;
}

int Bureaucrat::getGrade()const{
    return grade;
}

void Bureaucrat::incrementGrade(){
    if(grade == 1)
    {
        throw GradeTooHighException();
    }else
        grade--;
}

void Bureaucrat::decrementGrade(){
    if(grade == 150)
    {
        throw GradeTooLowException();
    }else
        grade++;
}

void Bureaucrat::signForm(Form& form){
    try{
        form.beSigned(*this);
        if(form.getSignStatus())
            std::cout << name << " signed " <<form.getName() << std::endl;
    }catch(std::exception& e)
    {
        std::cout << name << " couldn't sign " << form.getName() << " because " << e.what() << std::endl; 
    }
}

const char * Bureaucrat::GradeTooHighException::what() const throw(){
    return "grade to high";
}

const char * Bureaucrat::GradeTooLowException::what()  const throw(){
    return "grade to low below";
}

std::ostream& operator << (std::ostream& out, const Bureaucrat& bur){
    out <<bur.getName() << ", bureaucrat grade "<< bur.getGrade() << ".";
    return out;
}