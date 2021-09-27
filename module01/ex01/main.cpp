/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <louis-philippe.aube@hotmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 22:16:20 by laube             #+#    #+#             */
/*   Updated: 2021/09/27 15:13:26 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name);

int	main(void)
{
	Zombie*	zombies;
	int	N;

	N = 5;
	zombies = zombieHorde(N, "Jimmy");
	for (int i = 0; i < N; i++)
	{
		zombies[i].announce();
	}
	if (N == 1)
		delete zombies;
	else if (N > 1)
		delete[] zombies;
	return (0);
}