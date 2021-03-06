/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <louis-philippe.aube@hotmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 13:29:44 by laube             #+#    #+#             */
/*   Updated: 2021/09/27 15:11:24 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie*	zombies;

	if (N <= 0)
	{
		std::cout << "Number of zombies must be greater than 0" << std::endl;
		return (NULL);
	}
	if (N == 1)
	{
		zombies = new Zombie(name);
		return (zombies);
	}
	zombies = new Zombie[N];
	return (zombies);
}