/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-moun <eel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 15:36:57 by eel-moun          #+#    #+#             */
/*   Updated: 2023/02/04 15:36:58 by eel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP
#include<iostream>
#include<string>
#include <iomanip>

class Contact {
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_num;
		std::string	darkest_secret;

	public:
		void set_first_name();
		void set_last_name();
		void set_nickname();
		void set_phone_num();
		void set_darkest_secret();
		std::string get_first_name() const
			{return this->first_name;};
		std::string get_last_name() const
			{return this->last_name;};
		std::string get_nickname() const
			{return this->nickname;};
		std::string get_phone_num() const
			{return this->phone_num;};
		std::string get_darkest_secret() const
			{return this->darkest_secret;};
};

#endif