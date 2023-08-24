#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm& robo): AForm("RobotomyRequestForm",72,45),target(robo.target){
    std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target):AForm("RobotomyRequestForm",72,45),target(target){
    std::cout << "RobotomyRequestForm constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(){
    std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator= (RobotomyRequestForm& robo){
    (void) robo;
    return *this;
}

void RobotomyRequestForm::exec() const{
    std::cout << "drilling noises..." << std::endl;
    srand((unsigned) time(NULL)); 
    int i = rand();
    if(i % 2)
        std::cout << target << " has been robotomized successfully" <<std::endl;
    else
        std::cout << target << " hasn't been robotomized successfully" <<std::endl;
}
