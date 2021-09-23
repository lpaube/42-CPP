/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ContactManager.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <louis-philippe.aube@hotmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 15:23:07 by laube             #+#    #+#             */
/*   Updated: 2021/09/23 15:35:50 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ContactManager.hpp"

ContactManager::ContactManager()
{
	this->contact_amt = 0;
}

void	ContactManager::add_contact(void)
{
	int	i;

	i = 7;
	while (i > 0)
	{
		this->contacts[i] = this->contacts[i - 1];
		this->contacts[i].index++;
		i--;
	}
		this->contacts[0].is_active = 1;
		std::cout << "Enter FIRST NAME: ";
		std::getline(std::cin >> std::ws, this->contacts[0].first_name); 
		std::cout << "Enter LAST NAME: ";
		std::getline(std::cin >> std::ws, this->contacts[0].last_name); 
		std::cout << "Enter NICKNAME: ";
		std::getline(std::cin >> std::ws, this->contacts[0].nickname); 
		std::cout << "Enter PHONE NUMBER: ";
		std::getline(std::cin >> std::ws, this->contacts[0].phone_num); 
		std::cout << "Enter SECRET: ";
		std::getline(std::cin >> std::ws, this->contacts[0].secret); 
} 

void	ContactManager::get_index(void)
{
	size_t	buff_index;

	std::cout << "Enter an index: ";
	std::cin >> buff_index;
	while (!(std::cin.good())
	{
		//CHECK CONDITION OF CIN
	}
	if (this->contacts[buff_index].is_active == 1)
		// PRINT PROPERTIES OF CONTACT WITH INDEX

}

void	ContactManager::search_contact(void)
{
	int	i;

	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|===========================================|" << std::endl;
	i = 0;
	while (this->contacts[i].is_active)
	{
		std::cout << "|" << std::setw(10) << this->contacts[i].index;
		if (this->contacts[i].first_name.length() > 10)
			std::cout << "|" << std::setw(10) << this->contacts[i].first_name.substr(0, 9) << ".";
		else
			std::cout << "|" << std::setw(10) << this->contacts[i].first_name;
		if (this->contacts[i].last_name.length() > 10)
			std::cout << "|" << this->contacts[i].last_name.substr(0, 9) << ".";
		else
			std::cout << "|" << std::setw(10) << this->contacts[i].last_name;
		if (this->contacts[i].nickname.length() > 10)
			std::cout << "|" << std::setw(10) << this->contacts[i].nickname.substr(0, 9) << ".";
		else
			std::cout << "|" << std::setw(10) << this->contacts[i].nickname;
		std::cout << "|" << std::endl;
		i++;
	}
	std::cout << "|-------------------------------------------|" << std::endl;
	get_index();
}