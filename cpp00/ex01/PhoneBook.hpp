/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-moun <eel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 15:37:05 by eel-moun          #+#    #+#             */
/*   Updated: 2023/02/04 15:37:06 by eel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"


class PhoneBook {
    private:
    int index;
    Contact Contacts[8];

    public:
    void ADD();
    void SEARCH();
    void EXIT();
    
    PhoneBook();
    ~PhoneBook() {return;};
};

#endif