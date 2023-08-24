#include "Bureaucrat.hpp"

int main(){
    Bureaucrat person2(49, "amine");
    try{
        std::cout << person2.getGrade() << std::endl;
    }catch(std::exception & e){
        std::cout << e.what() << std::endl;
        std::cout << "cool it works" << std::endl;
    }

    Form form("$$$", 50 ,30);
    person2.signForm(form);
}