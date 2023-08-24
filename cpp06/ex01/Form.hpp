#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
    private:
        const std::string name;
        bool  signStatus;
        const int signGrade;
        const int execGrade;
        Form();

    public:
        Form(Form& form);
        Form(const std::string name, const int signgrade, const int execgrade);
        ~Form();

        Form& operator = (Form& form);

        std::string getName() const;
        bool    getSignStatus() const;
        int   getSignGrade() const;
        int   getExecGrade() const;
        void    beSigned(Bureaucrat& bur);

        class GradeTooHighException: public std::exception{
            public:
                virtual const char *what() const throw();
        };

        class GradeTooLowException: public std::exception{
            public:
                virtual const char *what()  const throw();
        };
};

std::ostream& operator << (std::ostream& out, const Form& form);
#endif