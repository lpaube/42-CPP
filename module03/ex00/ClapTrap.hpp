/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 13:20:07 by laube             #+#    #+#             */
/*   Updated: 2021/11/18 11:20:10 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

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
  virtual ~ClapTrap();

  ClapTrap& operator=(const ClapTrap& rhs);

  virtual void attack(const std::string& target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);
};

#endif
