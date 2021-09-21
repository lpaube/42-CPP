/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 15:56:56 by laube             #+#    #+#             */
/*   Updated: 2021/08/16 18:54:19 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>

void	perform_add(void)
{
	
}

int	str_match(char *str, const char *match)
{
	int	i;

	i = 0;
	while (i < strlen(match))
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

	std::cout << "Please enter one of the following" << std::endl;
	std::cout << "'ADD'		: Add a new contact in the directory." << std::endl;
	std::cout << "'SEARCH'	: See the informations of a specific contact." << std::endl;
	std::cout << "'EXIT'		: Closes the directory and deletes all contacts." << std::endl;

	cin >> buff;
	if (str_match(buff, "ADD"))
		perform_add();
	else if (str_match(buff, "SEARCH"))
		perform_search();
	else if (str_match(buff, "EXIT"))
		perform_exit();
	else
		return (0);
	return (0);
}
