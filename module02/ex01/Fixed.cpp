/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 06:19:08 by laube             #+#    #+#             */
/*   Updated: 2021/10/01 13:46:34 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Constructors
Fixed::Fixed()
{
	value = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& src)
{
	value = src.value;
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed(const int num)
{
	value = num;
}

Fixed::Fixed(const float num)
{

}

// Destructor
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

// Operator overloads
Fixed&	Fixed::operator=(const Fixed& src)
{
	value = src.value;
	std::cout << "Assignation operator called" << std::endl;
	return (*this);
}

std::ostream& operator<<(std::ostream& op, Fixed const& rhs)
{
	op << rhs.toFloat();
	return (op);
}

// Member functions
int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (value);
}

void	Fixed::setRawBits(int const raw)
{
	value = raw;
	std::cout << "setRawBits member function called" << std::endl;
}
