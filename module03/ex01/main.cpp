/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 12:04:47 by laube             #+#    #+#             */
/*   Updated: 2021/10/05 14:37:27 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void) {
  ClapTrap *clappy = new ClapTrap("Clappy");

  clappy->attack("Bandit");
  clappy->takeDamage(3);
  clappy->beRepaired(2);
  std::cout << std::endl;

  ClapTrap *claptrap = new ClapTrap;
  claptrap->attack("Bandit");
  claptrap->takeDamage(3);
  claptrap->beRepaired(2);
  claptrap->takeDamage(4);
  claptrap->attack("Ghost");
}
