/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 14:01:27 by laube             #+#    #+#             */
/*   Updated: 2021/10/06 14:36:34 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	ScavTrap();
	ScavTrap(const ScavTrap& src);
	~ScavTrap();

	ScavTrap& operator=(const ScavTrap& src);
	
	void guardGate();
};
