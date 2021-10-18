/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42quebec.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 17:55:14 by laube             #+#    #+#             */
/*   Updated: 2021/10/18 17:55:16 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook()
{
	this->contact_amt = 0;
}

void	Phonebook::add_contact(void)
{
	int	i;

	i = 7;
	while (i > 0)
	{
		this->contacts[i] = this->contacts[i - 1];
		this->contacts[i].incIndex();
		i--;
	}
		this->contacts[0].is_active = 1;
		std::cout << "Enter FIRST NAME: ";
		std::getline(std::cin >> std::ws, this->contacts[0].getStr("first_name")); 
		std::cout << "Enter LAST NAME: ";
		std::getline(std::cin >> std::ws, this->contacts[0].getStr("last_name")); 
		std::cout << "Enter NICKNAME: ";
		std::getline(std::cin >> std::ws, this->contacts[0].getStr("nickname")); 
		std::cout << "Enter PHONE NUMBER: ";
		std::getline(std::cin >> std::ws, this->contacts[0].getStr("phone_num")); 
		std::cout << "Enter SECRET: ";
		std::getline(std::cin >> std::ws, this->contacts[0].getStr("secret")); 
} 

void	Phonebook::get_index(void)
{
	size_t	buff_index;

	std::cout << "Enter an index: ";
	if (std::cin >> buff_index && this->contacts[buff_index].is_active == 1)
	{
		std::cout << "FIRST NAME: " << contacts[buff_index].first_name << std::endl;
		std::cout << "LAST NAME: " << contacts[buff_index].last_name << std::endl;
		std::cout << "NICKNAME: " << contacts[buff_index].nickname << std::endl;
		std::cout << "PHONE NUM: " << contacts[buff_index].phone_num << std::endl;
		std::cout << "SECRET: " << contacts[buff_index].secret << std::endl;
	}
	else
	{
		std::cout << "Error: Invalid index" << std::endl;
		std::cin.clear();
		std::cin.ignore(10000, '\n');
	}
}

void	Phonebook::search_contact(void)
{
	int	i;

	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|===========================================|" << std::endl;
	i = 0;
	while (this->contacts[i].is_active)
	{
		std::cout << "|" << std::setw(10) << this->contacts[i].getInt("index");
		if (this->contacts[i].first_name.length() > 10)
			std::cout << "|" << this->contacts[i].first_name.substr(0, 9) << ".";
		else
			std::cout << "|" << std::setw(10) << this->contacts[i].first_name;
		if (this->contacts[i].last_name.length() > 10)
			std::cout << "|" << this->contacts[i].last_name.substr(0, 9) << ".";
		else
			std::cout << "|" << std::setw(10) << this->contacts[i].last_name;
		if (this->contacts[i].nickname.length() > 10)
			std::cout << "|" << this->contacts[i].nickname.substr(0, 9) << ".";
		else
			std::cout << "|" << std::setw(10) << this->contacts[i].nickname;
		std::cout << "|" << std::endl;
		i++;
	}
	std::cout << "|-------------------------------------------|" << std::endl;
	get_index();
}
