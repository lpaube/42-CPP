/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <louis-philippe.aube@hotmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 21:13:10 by laube             #+#    #+#             */
/*   Updated: 2021/09/28 18:49:46 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>
#include <string>
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
{
	this->weapon = &weapon;
	this->name = name;
}

void	HumanA::attack(void)
{
	std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
}