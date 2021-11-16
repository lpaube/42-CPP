/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 12:34:13 by laube             #+#    #+#             */
/*   Updated: 2021/11/16 14:18:46 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>

#include "ScavTrap.hpp"

class FragTrap : virtual public ClapTrap {
 public:
  FragTrap();
  FragTrap(std::string name);
  FragTrap(const FragTrap& src);
  ~FragTrap();

  FragTrap& operator=(const FragTrap& rhs);

  void highFivesGuys(void);
  virtual void attack(const std::string& target);
  void initDiamondTrap();
};

#endif
