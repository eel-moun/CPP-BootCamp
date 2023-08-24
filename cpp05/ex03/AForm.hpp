#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
    private:
        const std::string name;
        bool  signStatus;
        const int signGrade;
        const int execGrade;
        AForm();

    public:
        AForm(AForm& form);
        AForm(const std::string name, const int signgrade, const int execgrade);
        ~AForm();

        AForm& operator = (AForm& form);

        std::string getName() const;
        bool    getSignStatus() const;
        int   getSignGrade() const;
        int   getExecGrade() const;
        void    beSigned(Bureaucrat& bur);
        void    execute(Bureaucrat const & executor) const;
        virtual void exec() const = 0;

        class GradeTooHighException: public std::exception{
            public:
                virtual const char *what() const throw();
        };

        class GradeTooLowException: public std::exception{
            public:
                virtual const char *what()  const throw();
        };

        class NotSigned: public std::exception{
            public:
                virtual const char *what()  const throw();
        };
};

std::ostream& operator << (std::ostream& out, const AForm& form);
#endif