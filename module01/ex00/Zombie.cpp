/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <louis-philippe.aube@hotmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 22:32:36 by laube             #+#    #+#             */
/*   Updated: 2021/09/26 12:59:24 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

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
	std::cout << this->name << " BraiiiiiiinnnnnzzzZ..." << std::endl;
}
