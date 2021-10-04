/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <louis-philippe.aube@hotmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 19:01:49 by laube             #+#    #+#             */
/*   Updated: 2021/10/04 17:37:28 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int	main(void)
{
	Fixed b( 10 );
	Fixed const c( 10.5f );

	Fixed x = b / c;
	
	std::cout << "this is b: " << b << std::endl;
	std::cout << "this is c: " << c << std::endl;
	std::cout << "this is x: " << x << std::endl;

	return 0;
}
