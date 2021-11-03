/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 12:31:39 by laube             #+#    #+#             */
/*   Updated: 2021/11/03 14:37:10 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() {
  name = "FragTrap";
  hitPoints = 100;
  energyPoints = 100;
  dmg = 30;
  std::cout << "A ClapTrap has been upgraded to a FragTrap!" << std::endl;
}

FragTrap::FragTrap(std::string name) {
  this->name = name;
  hitPoints = 100;
  energyPoints = 100;
  dmg = 30;
  std::cout << "A ClapTrap has been upgraded to a FragTrap!" << std::endl;
}

FragTrap::FragTrap(const FragTrap& src) {
  name = src.name;
  hitPoints = src.hitPoints;
  energyPoints = src.energyPoints;
  dmg = src.dmg;
  std::cout << "A ClapTrap has been upgraded to a FragTrap!" << std::endl;
}

FragTrap::~FragTrap() {
  std::cout << name << " has been downgraded to a ClapTrap." << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& rhs) {
  if (this == &rhs) return (*this);
  name = rhs.name;
  hitPoints = rhs.hitPoints;
  energyPoints = rhs.energyPoints;
  dmg = rhs.dmg;
  return (*this);
}

void FragTrap::highFivesGuys(void) {
  std::cout << name << ": High five guys!!  ....  guys?..." << std::endl;
}
