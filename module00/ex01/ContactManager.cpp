/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ContactManager.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <louis-philippe.aube@hotmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 15:23:07 by laube             #+#    #+#             */
/*   Updated: 2021/09/23 13:12:37 by laube            ###   ########.fr       */
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

void	ContactManager::search_contact(void)
{
	std::cout << "|*******************************************|";
	std::cout << "|     Index|First Name| Last Name|  Nickname|";
	std::cout << "|*******************************************|";
	while (this->contacts[i].is_active)
	{
		
	}
}