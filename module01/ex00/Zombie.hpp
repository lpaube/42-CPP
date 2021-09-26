/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <louis-philippe.aube@hotmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 22:27:29 by laube             #+#    #+#             */
/*   Updated: 2021/09/26 13:06:04 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <stdio.h>
#include <string>
#include <iostream>

/* CLASS DEFINITIONS*/
class Zombie {
	public:
		Zombie(std::string new_name);
		~Zombie();
		void	announce(void);
	private:
		std::string	name;
};

/* PROTOTYPES */
Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif