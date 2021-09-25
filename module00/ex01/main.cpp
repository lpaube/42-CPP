/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <louis-philippe.aube@hotmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 15:56:56 by laube             #+#    #+#             */
/*   Updated: 2021/09/24 21:53:25 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>
#include "ContactManager.hpp"
#include "Contact.hpp"


int	str_match(char *str, const char *match)
{
	int	i;

	i = 0;
	while (i < (int)strlen(match))
	{
		if (str[i] != match[i])
			return (0);
		i++;
	}
	if (str[i] != 0)
		return (0);
	return (1);
}

int	main(void)
{
	char buff[10000];
	ContactManager	contact_manager;


	while (true)
	{
		std::cout << std::endl;
		std::cout << "Please enter one of the following" << std::endl;
		std::cout << "'ADD'		: Add a new contact in the directory." << std::endl;
		std::cout << "'SEARCH'	: See the informations of a specific contact." << std::endl;
		std::cout << "'EXIT'		: Closes the directory and deletes all contacts." << std::endl;
		std::cout << "> ";
		std::cin >> buff;
		if (str_match(buff, "ADD"))
			contact_manager.add_contact();
		else if (str_match(buff, "SEARCH"))
			contact_manager.search_contact();
		else if (str_match(buff, "EXIT"))
			return (0);
		else
			std::cout << "Error: Invalid command" << std::endl;
	}
	return (0);
}
