#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat{
    private:
        const std::string name;
        int grade;
        Bureaucrat();

    public:
        Bureaucrat(int const grade, const std::string name);
        Bureaucrat(Bureaucrat& bur);
        ~Bureaucrat();

        Bureaucrat& operator = (Bureaucrat & bur);

        std::string getName() const;
        int getGrade() const;
        void incrementGrade();
        void decrementGrade();
        void signForm(Form& form);

        class GradeTooHighException: public std::exception{
            public:
                virtual const char *what() const throw();
        };

        class GradeTooLowException: public std::exception{
            public:
                virtual const char *what()  const throw();
        };

};

std::ostream& operator << (std::ostream& out, const Bureaucrat& bur);

#endif