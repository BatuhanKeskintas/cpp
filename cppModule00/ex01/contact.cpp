/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkeskint <bkeskint@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 18:59:19 by bkeskint          #+#    #+#             */
/*   Updated: 2022/06/09 22:00:21 by bkeskint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "contact.hpp"

Contact::Contact(void)
{
	static int i = 1;
	std::cout << "\033[1;32m" << i << ". Contact constructed!" << std::endl;
	i++;
	return ;
}

Contact::~Contact(void)
{
	static int i = 1;
	std::cout << "\033[1;31m" << i << ". Contact Destructed!" << std::endl;
	i++;
	return ;
}

std::string Contact::get_first_name(void)
{
	return (this->first_name);
}

std::string Contact::get_last_name(void)
{
	return (this->last_name);
}

std::string Contact::get_city(void)
{
	return (this->city);
}

std::string Contact::get_phone(void)
{
	return (this->phone);
}

void Contact::set_index(int index)
{
	this->index = index;
}

void Contact::set_first_name(std::string first_name)
{
	this->first_name = first_name;
	std::cout << "\033[1;32m -> Success " << std::endl;	
}

void Contact::set_last_name(std::string last_name)
{
	this->last_name = last_name;
	std::cout << "\033[1;32m -> Success " << std::endl;
}

void Contact::set_city(std::string city)
{
	this->city = city;
	std::cout << "\033[1;32m -> Success " << std::endl;
}

void Contact::set_phone(std::string phone)
{
	this->phone = phone;
	std::cout << "\033[1;32m -> Success " << std::endl;
}