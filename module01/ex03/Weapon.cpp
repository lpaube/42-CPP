/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <louis-philippe.aube@hotmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 15:42:03 by laube             #+#    #+#             */
/*   Updated: 2021/09/27 15:48:32 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

std::string const& Weapon::getType(void)
{
	std::string const& typeRef = this->type;
	return (typeRef);
}

void	Weapon::setType(std::string new_type)
{
	this->type = new_type;
}