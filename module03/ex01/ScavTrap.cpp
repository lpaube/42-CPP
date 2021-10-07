/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 14:01:04 by laube             #+#    #+#             */
/*   Updated: 2021/10/07 13:21:51 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
  name = "ScavTrap";
  hitPoints = 100;
  energyPoints = 50;
  dmg = 20;
  std::cout << name << " has been upgraded to a ScavTrap!" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
  this->name = name;
  hitPoints = 100;
  energyPoints = 50;
  dmg = 20;
  std::cout << name << " has been upgraded to a ScavTrap!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& src) {
  hitPoints = src.hitPoints;
  energyPoints = src.energyPoints;
  dmg = src.dmg;
  std::cout << name << " has been upgraded to a ScavTrap!" << std::endl;
}

ScavTrap::~ScavTrap() {
  std::cout << name << " has lost its upgrade and is now a basic ClapTrap."
            << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& rhs) {
  if (this == &rhs) return (*this);
  name = rhs.name;
  hitPoints = rhs.hitPoints;
  energyPoints = rhs.energyPoints;
  dmg = rhs.dmg;
  return (*this);
}

void ScavTrap::guardGate() {
  std::cout << name << " is now in 'Gate Keeper' mode." << std::endl;
}
