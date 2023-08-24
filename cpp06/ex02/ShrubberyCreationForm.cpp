#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm& shrub): AForm("ShrubberyCreationForm",145,137),target(shrub.target){
    std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target):AForm("ShrubberyCreationForm",145,137),target(target){
    std::cout << "ShrubberyCreationForm constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
    std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator= (ShrubberyCreationForm& shrub){
    (void) shrub;
    return *this;
}

void ShrubberyCreationForm::exec() const{
    std::ofstream file( target + "_shrubbery" );
    if(file)
    {
        file << "                      ___" << std::endl;
        file << "                _,-'\"\"   \"\"\"\"`--." << std::endl;
        file << "             ,-'          __,,-- \\" << std::endl;
        file << "           ,\'    __,--\"\"\"\"dF      )" << std::endl;
        file << "          /   .-\"Hb_,--\"\"dF      /" << std::endl;
        file << "        ,\'       _Hb ___dF\"-._,-'" << std::endl;
        file << "      ,'      _,-\"\"\"\"   \"\"--..__" << std::endl;
        file << "     (     ,-'                  `." << std::endl;
        file << "      `._,'     _   _             ;" << std::endl;
        file << "       ,'     ,' `-'Hb-.___..._,-'" << std::endl;
        file << "       \\    ,'\"Hb.-\'HH`-.dHF\"" << std::endl;
        file << "        `--\'   \"Hb  HH  dF\"" << std::endl;
        file << "                \"Hb HH dF" << std::endl;
        file << "                 \"HbHHdF" << std::endl;
        file << "                  |HHHF" << std::endl;
        file << "                  |HHH|" << std::endl;
        file << "                  |HHH|" << std::endl;
        file << "                  |HHH|" << std::endl;
        file << "                  |HHH|" << std::endl;
        file << "                  dHHHb" << std::endl;
        file << "                .dFd|bHb.               o" << std::endl;
        file << "      o       .dHFdH|HbTHb.          o /" << std::endl;
        file << "\\  Y  |  \\__,dHHFdHH|HHhoHHb.__Krogg  Y" << std::endl;
        file << "##########################################" << std::endl;
        
        file.close();
    }
}
