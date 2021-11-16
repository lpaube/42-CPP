/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 12:31:39 by laube             #+#    #+#             */
/*   Updated: 2021/11/16 14:18:39 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("GenericTrap") {
  this->name = "GenericTrap";
  this->hitPoints = 100;
  this->energyPoints = 100;
  this->dmg = 30;
  std::cout << name << " has gained a FragTrap upgrade." << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
  this->name = name;
  this->hitPoints = 100;
  this->energyPoints = 100;
  this->dmg = 30;
  std::cout << name << " has gained a FragTrap upgrade." << std::endl;
}

FragTrap::FragTrap(const FragTrap& src) :ClapTrap(src.name) {
  this->name = src.name;
  this->hitPoints = src.hitPoints;
  this->energyPoints = src.energyPoints;
  this->dmg = src.dmg;
  std::cout << name << " has gained a FragTrap upgrade." << std::endl;
}

FragTrap::~FragTrap() {
  std::cout << name << " has lost its FragTrap upgrade." << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& rhs) {
  if (this == &rhs) return (*this);
  this->name = rhs.name;
  this->hitPoints = rhs.hitPoints;
  this->energyPoints = rhs.energyPoints;
  this->dmg = rhs.dmg;
  return (*this);
}

void FragTrap::initDiamondTrap() {
	this->hitPoints = 100;
	this->dmg = 30;
}

void FragTrap::highFivesGuys(void) {
  std::cout << name << ": High five guys!!  ....  guys?..." << std::endl;
}

void FragTrap::attack(const std::string& target) {
  std::cout << name << " throws frag grenade on " << target << ", causing " << dmg
            << " points of damage!" << std::endl;
}
