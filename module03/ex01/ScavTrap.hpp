/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 14:01:27 by laube             #+#    #+#             */
/*   Updated: 2021/11/15 20:47:57 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
 public:
  ScavTrap();
  ScavTrap(const ScavTrap& src);
  ScavTrap(std::string name);
  virtual ~ScavTrap();

  ScavTrap& operator=(const ScavTrap& rhs);

  virtual void attack(const std::string& target);
  void guardGate();
};

#endif
