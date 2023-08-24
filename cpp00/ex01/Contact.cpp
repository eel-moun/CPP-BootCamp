/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-moun <eel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 15:36:49 by eel-moun          #+#    #+#             */
/*   Updated: 2023/02/04 15:36:50 by eel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::set_first_name(void){
	std::cout<<"Enter First Name:";
	std::getline(std::cin, this->first_name);
	if(std::cin.eof() || this->first_name.empty())
		exit(0);
	std::cout<<std::endl;
}

void Contact::set_last_name(void){
	std::cout<<"Enter Last Name:";
	std::getline(std::cin, this->last_name);
	if(std::cin.eof() || this->first_name.empty())
		exit(0);
	std::cout<<std::endl;
}

void Contact::set_nickname(void){
	std::cout<<"Enter NickName:";
	std::getline(std::cin, this->nickname);
	if(std::cin.eof() || this->first_name.empty())
		exit(0);
	std::cout<<std::endl;
}

void Contact::set_phone_num(void){
	std::cout<<"Enter Phone Number:";
	std::getline(std::cin, this->phone_num);
	if(std::cin.eof() || this->first_name.empty())
		exit(0);
	std::cout<<std::endl;
}

void Contact::set_darkest_secret(void){
	std::cout<<"Enter Darkest Secret:";
	std::getline(std::cin, this->darkest_secret);
	if(std::cin.eof() || this->first_name.empty())
		exit(0);
	std::cout<<std::endl;
}