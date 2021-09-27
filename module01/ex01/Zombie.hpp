/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <louis-philippe.aube@hotmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 22:27:29 by laube             #+#    #+#             */
/*   Updated: 2021/09/26 21:21:28 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <stdio.h>
#include <string>
#include <iostream>

/* CLASS DEFINITION*/
class Zombie {
	public:
		Zombie(void);
		Zombie(std::string new_name);
		~Zombie(void);
		void	set_name(void);
		void	announce(void);
	private:
		std::string	name;
};

#endif