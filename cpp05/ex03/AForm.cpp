#include "AForm.hpp"

AForm::AForm(AForm& form):name(form.name),signGrade(form.signGrade), execGrade(form.execGrade){
    std::cout << "form copy constructor called" << std::endl;
    *this = form;
}

AForm::AForm(const std::string name, const int signgrade, const int execgrade): name(name), signGrade(signgrade),execGrade(execgrade){
    std::cout << "AForm constructor called" << std::endl;
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

AForm::~AForm(){
    std::cout << "AForm default constructor" << std::endl;
}

AForm& AForm::operator = (AForm& form){
    std::cout << "AForm copy assignement operator called" << std::endl;
    signStatus = form.signStatus;
    return *this;
}

std::string AForm::getName() const{
    return name;
}

bool    AForm::getSignStatus() const{
    return signStatus;
}

int AForm::getSignGrade() const{
    return signGrade;
}

int AForm::getExecGrade() const{
    return execGrade;
}

const char * AForm::GradeTooHighException::what() const throw(){
    return "grade to high";
}

const char * AForm::GradeTooLowException::what()  const throw(){
    return "grade to low";
}

const char * AForm::NotSigned::what()  const throw(){
    return "form not signed";
}

void    AForm::beSigned(Bureaucrat& bur){
    if(bur.getGrade() > signGrade)
        throw GradeTooLowException();
    else
        signStatus = true;
}

void AForm::execute(Bureaucrat const & executor) const {
    if(signStatus)
    {
        if(executor.getGrade() < execGrade)
        {
            exec();
        }else{
            throw GradeTooLowException();
        }
    }
    else
    {
        throw NotSigned();
    }
}

std::ostream& operator << (std::ostream& out, const AForm& form){
    out <<form.getName() << " status is "<< form.getSignStatus() << " with a signing grade of " << form.getSignGrade() << " and an exec grade of " << form.getExecGrade();
    return out;
}