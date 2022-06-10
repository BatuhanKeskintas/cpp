/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkeskint <bkeskint@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 13:12:07 by bkeskint          #+#    #+#             */
/*   Updated: 2022/06/09 22:00:41 by bkeskint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phonebook.hpp"

Phonebook::Phonebook(void)
{
	std::cout << "\033[1;32m PhoneBook Contructed!" << std::endl;
	return ;
}

Phonebook::~Phonebook(void)
{
	std::cout << "\033[1;31m PhoneBook Destructed!" << std::endl;
	return ;
}

Contact *Phonebook::get_contact(int index)
{
	return &this->_contact[index];
}