/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 12:04:47 by laube             #+#    #+#             */
/*   Updated: 2021/10/07 12:02:50 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void) {
  ScavTrap *scavy = new ScavTrap("Scavy");

  scavy->attack("Bandit");
  scavy->takeDamage(3);
  scavy->beRepaired(2);
  delete scavy;
  std::cout << std::endl;

  ScavTrap* scavtrap = new ScavTrap;
  scavtrap->attack("Bandit");
  scavtrap->takeDamage(3);
  scavtrap->beRepaired(2);
  scavtrap->takeDamage(4);
  scavtrap->attack("Ghost");
  scavtrap->guardGate();
  delete scavtrap;
}
