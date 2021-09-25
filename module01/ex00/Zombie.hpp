/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <louis-philippe.aube@hotmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 22:27:29 by laube             #+#    #+#             */
/*   Updated: 2021/09/24 22:40:04 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <stdio.h>
#include <string>

class Zombie {
	public:
		~Zombie();
		void	set_name(std::string new_name);
		void	announce(void);
	private:
		std::string	name;
};

#endif