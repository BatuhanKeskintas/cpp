/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkeskint <bkeskint@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 18:53:33 by bkeskint          #+#    #+#             */
/*   Updated: 2022/06/10 01:13:03 by bkeskint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contact.hpp"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	std::string cmd;
	std::string	str = "empty";
	std::string search;
	int			snumber;
	int			i = 0;
	int			j;
	int			k;
	bool		flag = 0;
	Phonebook	phonebook;

	std::string first_name;
	std::string last_name;
	std::string city;
	std::string phone;

	while (1)
	{
		std::cout << "\033[1;37mPlease type your option: ADD SEARCH EXIT" << std::endl;
		std::cin >> cmd;
		for (int c = 0; cmd[c]; c++)
			cmd[c] = (char)std::toupper(cmd[c]);

		if (!cmd.compare("EXIT"))
			break;
		else if (!cmd.compare("ADD"))
		{
			std::cout << "\033[1;37m You can add your contact:" << std::endl;
			phonebook.get_contact(i)->set_index(i);
			std::cout << "\033[1;37m Enter first name: ";
			std::cin >> first_name;
			phonebook.get_contact(i)->set_first_name(first_name);
			std::cout << "\033[1;37m Enter last name: ";
			std::cin >> last_name;
			phonebook.get_contact(i)->set_last_name(last_name);
			std::cout << "\033[1;37m Enter city: ";
			std::cin >> city;
			phonebook.get_contact(i)->set_city(city);
			while (1)
			{
				int numeric_check = 0;
				std::cout << "\033[1;37m Enter Phone (Only Numeric): ";
				std::cin >> phone;
				for (int j = 0; phone[j]; j++)
				{
					if (phone[j] < 48 || phone[j] > 57)
						numeric_check++;
				}
				if(!numeric_check)
					break;
			}
			phonebook.get_contact(i)->set_phone(phone);
			i++;
			if (i % 8 == 0)
			{
				flag = 1;
				i = 0;
			}
		}
		else if (!cmd.compare("SEARCH"))
		{
			std::cout << "\033[1;34m______ __________ __________ ___________" << std::endl;
			std::cout << "\033[1;34m|Index|First Name| Last Name|      City|" << std::endl;
			if (flag == 0)
				j = i;
			else
				j = 8;
			k = 0;
			while (j > 0)
			{
				int len;
				std::cout << "|";
				std::cout << "  " << k + 1 << "  |";

				/*Print First Name */
				str = phonebook.get_contact(k)->get_first_name();
				len = str.length();
				if (len > 10)
				{
					str.resize(9);
					str.insert(str.end(), 1, '.');
				}
				if (10 - len > 0)
					str.insert(str.begin(), 10 - len, ' ');
				std::cout << str << "|";

				/*Printf Last Name */
				str = phonebook.get_contact(k)->get_last_name();
				len = str.length();
				if (len > 10)
				{
					str.resize(9);
					str.insert(str.end(), 1, '.');
				}
				if (10 - len > 0)
					str.insert(str.begin(), 10 - len, ' ');
				std::cout << str << "|";

				/*Printf City */
				str = phonebook.get_contact(k)->get_city();
				len = str.length();
				if (len > 10)
				{
					str.resize(9);
					str.insert(str.end(), 1, '.');
				}
				if (10 - len > 0)
					str.insert(str.begin(), 10 - len, ' ');
				std::cout << str << "|" << std::endl;
				
				j--;
				k++;
				if (k % 8 == 0)
					k = 0;
			}
			std::cout << "|_____|__________|__________|__________|" << std::endl;

			/*Search Index*/
			std::cout << "\033[1;37mEnter Index Number: ";
			std::cin >> search;
			std::cout << std::endl;
			snumber = search.compare("0");
			if (snumber >= 1 && snumber <= 8 && search.length() == 1)
			{
				if (flag || i > snumber - 1)
				{
					std::cout << "\033[1;34mFirst name:\t" << phonebook.get_contact(snumber - 1)->get_first_name() << std::endl;
					std::cout << "Last name:\t" << phonebook.get_contact(snumber - 1 )->get_last_name() << std::endl;
					std::cout << "Nickname:\t" << phonebook.get_contact(snumber - 1)->get_city() << std::endl;
					std::cout << "Phone number:\t" << phonebook.get_contact(snumber - 1)->get_phone() << std::endl;
				}
				else
					std::cout << "\033[1;31mNo entry found for the given index" << std::endl;
			}
			else
				std::cout << "\033[1;31mGiven index is out of bounds" << std::endl;
		}
		else
			continue;
	}
	std::cout << "\033[0;37mLast Command = " << cmd << std::endl;
	return (0);
}
