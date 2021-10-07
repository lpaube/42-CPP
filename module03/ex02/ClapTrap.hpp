/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 13:20:07 by laube             #+#    #+#             */
/*   Updated: 2021/10/07 11:50:33 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP
#define CLAPTRAP

#include <iostream>

class ClapTrap {
 protected:
  std::string name;
  int hitPoints;
  int energyPoints;
  int dmg;

 public:
  ClapTrap();
  ClapTrap(const ClapTrap& src);
  ClapTrap(std::string newName);
  ~ClapTrap();

  ClapTrap& operator=(const ClapTrap& rhs);

  void attack(const std::string& target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);
};

#endif
