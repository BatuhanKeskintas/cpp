/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkeskint <bkeskint@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 13:12:10 by bkeskint          #+#    #+#             */
/*   Updated: 2022/06/09 21:04:53 by bkeskint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "contact.hpp"
# include <iostream>
# include <string>

class Phonebook{

	private:

		Contact	_contact[8];

	public:

		Phonebook(void);
		~Phonebook(void);
		Contact *get_contact(int index);

};

#endif