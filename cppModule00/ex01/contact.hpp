/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkeskint <bkeskint@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 18:54:07 by bkeskint          #+#    #+#             */
/*   Updated: 2022/06/09 21:41:04 by bkeskint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>
#include <stdlib.h>

class Contact{
	
	private:
	
		int				index;
		std::string		first_name;
		std::string		last_name;
		std::string		city;
		std::string		phone;

	public:
	
		Contact(void);
		~Contact(void);
		std::string get_first_name(void);
		std::string get_last_name(void);
		std::string get_city(void);
		std::string get_phone(void);
		void set_index(int index);
		void set_first_name(std::string first_name);
		void set_last_name(std::string last_name);
		void set_city(std::string city);
		void set_phone(std::string phone);
		
};

#endif