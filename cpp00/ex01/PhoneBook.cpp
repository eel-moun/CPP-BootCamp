/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-moun <eel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 15:37:02 by eel-moun          #+#    #+#             */
/*   Updated: 2023/02/04 15:37:03 by eel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

static int only_digit(std::string str)
{
    int i = 0;

    while(str[i])
    {
        if(!isdigit(str[i]))
            return (0);
        i++;
    }
    return(1);
}

static std::string mold(std::string str)
{
    if(str.length() > 9)
    {
        return (str.substr(0,9).replace(9,1,"."));
    }
    return (str);
}

void PhoneBook::ADD(void){
    this->Contacts[this->index].set_first_name();
    this->Contacts[index].set_last_name();
    this->Contacts[index].set_nickname();
    this->Contacts[index].set_phone_num();
    this->Contacts[index].set_darkest_secret();
    this->index = (this->index + 1) % 8;
    std::cout << std::endl;
}

void PhoneBook::SEARCH(void){
    int i = 0;
    std::string s;

    while(i < 8)
    { 
        std::cout << std::setw(10) << i << '|';
        std::cout << std::setw(10) << mold(this->Contacts[i].get_first_name()) << '|';
        std::cout << std::setw(10) << mold(this->Contacts[i].get_last_name()) << '|';
        std::cout << std::setw(10)<< mold(this->Contacts[i].get_nickname()) << std::endl;
        i++;
    }
    std::cout << "Select a contact: ";
    std::getline(std::cin,s);
    if(std::cin.eof())
        exit(0);
    std::cout << s << std::endl;
    if(only_digit(s))
    {
        i = std::stoi(s);
        if(i > 7 || i < 0)
            std::cout<<"number out of range";
        else
        {
            std::cout << this->Contacts[i].get_first_name() << std::endl;
            std::cout << this->Contacts[i].get_last_name() << std::endl;
            std::cout << this->Contacts[i].get_nickname() << std::endl;
            std::cout << this->Contacts[i].get_phone_num() << std::endl;
            std::cout << this->Contacts[i].get_darkest_secret() << std::endl;
        }
    }
    else
    {
        std::cout << "enter only digits" << std::endl;
    }
}

void PhoneBook::EXIT(void){
    exit(0);
}

PhoneBook::PhoneBook(void){
    std::string command;
    std::cout << "Welcome to my shitty PhoneBook" << std::endl;
    std::cout << "Enter one of these three Commands:" << std::endl;
    std::cout << "ADD (add a contact to your PhoneBook)" << std::endl;
    std::cout << "SEARCH (print the list of contacts registered to choose from)" << std::endl;
    std::cout << "EXIT (exits the program !!! all contacts will be lost !!!)" << std::endl;

    while (1)
    {
        std::cout << "enter a command:";
        std::getline(std::cin, command);
        if(std::cin.eof())
            exit(0);
        if (!command.compare("ADD"))
            ADD();
        else if (!command.compare("SEARCH"))
            SEARCH();
        else if (!command.compare("EXIT"))
            EXIT();
        else
            std::cout << "Command not found" << std::endl;
    }
}