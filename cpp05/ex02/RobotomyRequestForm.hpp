#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include "AForm.hpp"

class RobotomyRequestForm:public AForm{
    private:
        const std::string target;
        RobotomyRequestForm();

    public:
        RobotomyRequestForm(RobotomyRequestForm& shrub);
        RobotomyRequestForm(const std::string& target);
        ~RobotomyRequestForm();

        RobotomyRequestForm& operator=(RobotomyRequestForm& shrub);

        void exec() const;
};
#endif