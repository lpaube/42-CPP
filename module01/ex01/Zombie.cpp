/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <louis-philippe.aube@hotmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 22:32:36 by laube             #+#    #+#             */
/*   Updated: 2021/09/27 13:24:15 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <cstdlib>

void	Zombie::set_name(void)
{
	std::string	conson;
	std::string	vowels;
	std::string new_name;
	int	letter_amt;

	conson = "bcdfghjklmnpqrstvwxz";
	vowels = "aeiouy";
	letter_amt = 5;
	if (std::rand() % 2 == 0)
		letter_amt = 7;
	for (int i = 0; i < letter_amt; i++)
	{
		if (i % 2 == 0)
		{ 
			if (i == 0)
				new_name += toupper(conson[rand() % 20]);
			else
				new_name += conson[rand() % 20];
		}
		else
		{
			new_name += vowels[rand() % 6];
		}
	}
	this->name = new_name;
}

Zombie::Zombie(void)
{
	set_name();
}

Zombie::Zombie(std::string new_name)
{
	this->name = new_name;
}

Zombie::~Zombie(void)
{
	std::cout << this->name << " has been savegely killed" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnnnzzzZ..." << std::endl;
}
