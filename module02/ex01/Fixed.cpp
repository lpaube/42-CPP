/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 06:19:08 by laube             #+#    #+#             */
/*   Updated: 2021/10/01 15:06:45 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Constructors
Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	value = 0;
}

Fixed::Fixed(const Fixed& src)
{
	std::cout << "Copy constructor called" << std::endl;
	value = src.value;
}

Fixed::Fixed(const int num)
{
	std::cout << "Int constructor called" << std::endl;
	value = num << Fixed::fract_bits;
}

Fixed::Fixed(const float num)
{
	std::cout << "Float constructor called" << std::endl;
	// WTF IS THIS
	value = roundf(num * (1 << Fixed::fract_bits));
}

// Destructor
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

// Operator overloads
Fixed&	Fixed::operator=(const Fixed& src)
{
	std::cout << "Assignation operator called" << std::endl;
	value = src.value;
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
	std::cout << "setRawBits member function called" << std::endl;
	value = raw;
}

float	Fixed::toFloat(void) const
{
	return (value / 1 << Fixed::fract_bits);
}

int		Fixed::toInt(void) const
{
	return (value >> Fixed::fract_bits);
}
