/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <louis-philippe.aube@hotmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 15:42:03 by laube             #+#    #+#             */
/*   Updated: 2021/09/28 14:06:43 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void)
{
	this->type = "";
}

Weapon::Weapon(std::string type)
{
	this->type = type;
}

const std::string& Weapon::getType(void)
{
	const	std::string& typeRef = this->type;
	return (typeRef);
}

void	Weapon::setType(std::string new_type)
{
	this->type = new_type;
}