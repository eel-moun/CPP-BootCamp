#include "Form.hpp"

Form::Form(Form& form):name(form.name),signGrade(form.signGrade), execGrade(form.execGrade){
    std::cout << "form copy constructor called" << std::endl;
    *this = form;
}

Form::Form(const std::string name, const int signgrade, const int execgrade): name(name), signGrade(signgrade),execGrade(execgrade){
    std::cout << "Form constructor called" << std::endl;
    if(signgrade >150)
        throw GradeTooLowException();
    else if(signgrade < 1)
        throw GradeTooHighException();
    
    if(execgrade >150)
        throw GradeTooLowException();
    else if(execgrade < 1)
        throw GradeTooHighException();
    
    signStatus = false;
}

Form::~Form(){
    std::cout << "Form default constructor" << std::endl;
}

Form& Form::operator = (Form& form){
    std::cout << "Form copy assignement operator called" << std::endl;
    signStatus = form.signStatus;
    return *this;
}

std::string Form::getName() const{
    return name;
}

bool    Form::getSignStatus() const{
    return signStatus;
}

int Form::getSignGrade() const{
    return signGrade;
}

int Form::getExecGrade() const{
    return execGrade;
}

const char * Form::GradeTooHighException::what() const throw(){
    return "grade to high";
}

const char * Form::GradeTooLowException::what()  const throw(){
    return "grade to low";
}

void    Form::beSigned(Bureaucrat& bur){
    if(bur.getGrade() > signGrade)
        throw GradeTooLowException();
    else
        signStatus = true;
}

std::ostream& operator << (std::ostream& out, const Form& form){
    out <<form.getName() << " status is "<< form.getSignStatus() << " with a signing grade of " << form.getSignGrade() << " and an exec grade of " << form.getExecGrade();
    return out;
}