/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <laube@student.42quebec.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 23:14:07 by laube             #+#    #+#             */
/*   Updated: 2021/11/16 14:18:13 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

void DiamondTrap::initVar() {
	this->hitPoints = this->FragTrap::hitPoints;
	this->energyPoints = this->ScavTrap::energyPoints;
	this->dmg = this->FragTrap::dmg;
	ClapTrap::name = this->name + "_clap_name";
}

DiamondTrap::DiamondTrap() : ClapTrap("Generic_clap_name"), FragTrap("Generic_clap_name"), ScavTrap("Generic_clap_name") {
	name = "Generic";
	initVar();
	initDiamondTrap();
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(name + "_clap_name"), ScavTrap(name + "_clap_name") {
	this->name = name;
	initVar();
	initDiamondTrap();
}

DiamondTrap::DiamondTrap(const DiamondTrap& src) : ClapTrap(src), FragTrap(src), ScavTrap(src) {
	name = src.name;
	hitPoints = src.hitPoints;
	energyPoints = src.energyPoints;
	dmg = src.dmg;
	ClapTrap::name = this->name + "_clap_name";
}

DiamondTrap::~DiamondTrap() {
	std::cout << "The DiamondTrap upgrade has been lost." << std::endl;
}

void DiamondTrap::attack(const std::string& target) {
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
	std::cout << "Name: " << name << std::endl;
	std::cout << "ClapTrap name: " << ClapTrap::name << std::endl;
}

void DiamondTrap::printProp() {
	std::cout << "HitPoints: " << hitPoints << std::endl;
	std::cout << "Energy Points: " << energyPoints << std::endl;
	std::cout << "Attack dmg: " << dmg << std::endl;
}
