/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 13:20:07 by laube             #+#    #+#             */
/*   Updated: 2021/10/06 14:22:41 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class ClapTrap {
 private:
  std::string name;
  int hitPoints;
  int energyPoints;
  int dmg;

 public:
  ClapTrap();
  ClapTrap(std::string newName);
  ClapTrap(const ClapTrap& src);
  ~ClapTrap();

  ClapTrap& operator=(const ClapTrap& rhs);

  void attack(const std::string& target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);
};
