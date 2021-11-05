/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 12:04:35 by laube             #+#    #+#             */
/*   Updated: 2021/11/04 22:25:31 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string newName) {
  name = newName;
  hitPoints = 10;
  energyPoints = 10;
  dmg = 0;
  std::cout << name << " now in service!" << std::endl;
}

ClapTrap::ClapTrap() {
  name = "GenericTrap";
  hitPoints = 10;
  energyPoints = 10;
  dmg = 0;
  std::cout << name << " now in service!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& src) {
	hitPoints = src.hitPoints;
	energyPoints = src.energyPoints;
	dmg = src.dmg;
  	std::cout << name << " now in service!" << std::endl;
}

ClapTrap::~ClapTrap() {
  std::cout << name << " has been destroyed." << std::endl;
}

void ClapTrap::attack(const std::string& target) {
  std::cout << name << " attacks " << target << ", causing " << dmg
            << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
  hitPoints -= amount;
  std::cout << name << " has been attacked and received " << amount
            << " of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
  hitPoints += amount;
  std::cout << name << " has been repaired and recovered " << amount
            << " hit points." << std::endl;
};

ClapTrap& ClapTrap::operator=(const ClapTrap& rhs) {
	if (this == &rhs) return (*this);
	name = rhs.name;
	hitPoints = rhs.hitPoints;
	energyPoints = rhs.energyPoints;
	dmg = rhs.dmg;
	return (*this);
}
