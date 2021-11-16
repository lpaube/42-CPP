/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 12:04:47 by laube             #+#    #+#             */
/*   Updated: 2021/11/16 14:20:45 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

int main(void) {
	DiamondTrap diamondBoi;

	std::cout << std::endl;
	std::cout << "------ whoAmI -------" << std::endl;
	diamondBoi.whoAmI();
	std::cout << std::endl;

	DiamondTrap testBoi("TestBoi");
	testBoi.attack("tree");
	testBoi.printProp();
	std::cout << std::endl;
}
