/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 12:04:47 by laube             #+#    #+#             */
/*   Updated: 2021/10/24 23:25:42 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void) {
  FragTrap *fragy = new FragTrap("Fragy");

  fragy->attack("Bandit");
  fragy->takeDamage(3);
  fragy->beRepaired(2);
  std::cout << std::endl;

  FragTrap *dummy = new FragTrap(*fragy);
  dummy->highFivesGuys();
  delete dummy;
  std::cout << std::endl;

  ScavTrap *fragtrap = new ScavTrap;
  fragtrap->attack("Bandit");
  fragtrap->takeDamage(3);
  fragtrap->beRepaired(2);
  fragtrap->takeDamage(4);
  fragtrap->attack("Ghost");
  fragtrap->guardGate();
  delete fragtrap;
  delete fragy;
}
