/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 14:01:04 by laube             #+#    #+#             */
/*   Updated: 2021/11/16 14:07:21 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("GenericTrap") {
  this->name = "GenericTrap";
  this->hitPoints = 100;
  this->energyPoints = 50;
  this->dmg = 20;
  std::cout << name << " has gained a ScavTrap upgrade." << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
  this->name = name;
  this->hitPoints = 100;
  this->energyPoints = 50;
  this->dmg = 20;
  std::cout << name << " has gained a ScavTrap upgrade." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& src) : ClapTrap(src) {
  this->name = src.name;
  this->hitPoints = src.hitPoints;
  this->energyPoints = src.energyPoints;
  this->dmg = src.dmg;
  std::cout << name << " has gained a ScavTrap upgrade." << std::endl;
}

ScavTrap::~ScavTrap() {
  std::cout << name << " has lost its ScavTrap upgrade." << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& rhs) {
  if (this == &rhs) return (*this);
  this->name = rhs.name;
  this->hitPoints = rhs.hitPoints;
  this->energyPoints = rhs.energyPoints;
  this->dmg = rhs.dmg;
  return (*this);
}

void ScavTrap::guardGate() {
  std::cout << name << " is now in 'Gate Keeper' mode." << std::endl;
}

void ScavTrap::attack(const std::string& target) {
  std::cout << name << " flops like a fish on " << target << ", causing " << dmg
            << " points of damage!" << std::endl;
}
