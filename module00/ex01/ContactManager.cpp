/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ContactManager.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <louis-philippe.aube@hotmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 15:23:07 by laube             #+#    #+#             */
/*   Updated: 2021/09/22 22:59:26 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ContactManager.hpp"

ContactManager::ContactManager()
{
	this->contact_amt = 0;
}

void ContactManager::add_contact(void)
{
	int	i;

	i = 7;
	while (i > 0)
	{
		this->contacts[i] = this->contacts[i - 1];
		i--;
	}
		std::cout << "Please enter FIRST NAME: ";
		std::getline(std::cin, this->contacts[0]); 
} 
