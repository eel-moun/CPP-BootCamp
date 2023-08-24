#include "Bureaucrat.hpp"

int main(){
    try{
        Bureaucrat person2(2, "amine");
        std::cout << person2 << std::endl;
        person2.incrementGrade();
        std::cout << person2.getGrade() << std::endl;
        person2.incrementGrade();
    }catch(std::exception & e){
        std::cout << e.what() << std::endl;
        std::cout << "cool it works" << std::endl;
    }
}