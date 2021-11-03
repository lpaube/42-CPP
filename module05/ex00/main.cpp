/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <louis-philippe.aube@hotmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 20:15:46 by laube             #+#    #+#             */
/*   Updated: 2021/11/03 15:03:05 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

int main(void)
{
	// Generic functional tests to increase/decrease
	Bureaucrat francis("Jeremy", 100);
	std::cout << francis << std::endl;
	francis.incGrade();
	std::cout << francis << std::endl;
	francis.decGrade();
	std::cout << francis << std::endl;
	std::cout << std::endl;

	// Impossible value; rank too high
	try
	{
			Bureaucrat jack("Jonathan", 0);
			std::cout << jack << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	// Impossible value; rank too low
	try
	{
			Bureaucrat jack("Jonathan", 1000);
			std::cout << jack << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	// Bad increment
	try
	{
			Bureaucrat jack("Jonathan", 1);
			std::cout << jack << std::endl;
				jack.incGrade();
				std::cout << jack << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	// Bad decrement
	try
	{
			Bureaucrat jack("Jonathan", 150);
			std::cout << jack << std::endl;
				jack.decGrade();
				std::cout << jack << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}	
