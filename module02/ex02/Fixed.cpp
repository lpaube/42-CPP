/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 06:19:08 by laube             #+#    #+#             */
/*   Updated: 2021/10/04 17:36:45 by laube            ###   ########.fr       */
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

/* HOW TO GET FIXED POINT FROM FLOATING POINT:
** https://stackoverflow.com/questions/3402702/converting-floating-point-to-32-bit-fixed-point-in-java
*/

Fixed::Fixed(const float num)
{
	std::cout << "Float constructor called" << std::endl;
	value = roundf(num * (1 << Fixed::fract_bits));
}

// Destructor
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

// Member functions
int	Fixed::getValue(void) const
{
	return (value);
}

void	Fixed::setValue(int const new_val)
{
	value = new_val;
}

float	Fixed::toFloat(void) const
{
	return ((float)value / (1 << Fixed::fract_bits));
}

int		Fixed::toInt(void) const
{
	return (value >> Fixed::fract_bits);
}

// Operator overloads
Fixed&	Fixed::operator=(const Fixed& rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this == &rhs)
		return (*this);
	value = rhs.value;
	return (*this);
}

int	Fixed::operator>(const Fixed& rhs)
{
	if (this->value > rhs.getValue())
		return (1);
	return (0);
}

int	Fixed::operator<(const Fixed& rhs)
{
	if (this->value < rhs.getValue())
		return (1);
	return (0);
}

int	Fixed::operator>=(const Fixed& rhs)
{
	if (this->value >= rhs.getValue())
		return (1);
	return (0);
}

int	Fixed::operator<=(const Fixed& rhs)
{
	if (this->value <= rhs.getValue())
		return (1);
	return (0);
}

int	Fixed::operator==(const Fixed& rhs)
{
	if (this->value == rhs.getValue())
		return (1);
	return (0);
}

int	Fixed::operator!=(const Fixed& rhs)
{
	if (this->value != rhs.getValue())
		return (1);
	return (0);
}

Fixed	Fixed::operator+(const Fixed& rhs)
{
	return (Fixed(this->toFloat() + rhs.toFloat()));
}

Fixed	Fixed::operator-(const Fixed& rhs)
{
	return (Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed	Fixed::operator*(const Fixed& rhs)
{
	return (Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed	Fixed::operator/(const Fixed& rhs)
{
	return (Fixed(this->toFloat() / rhs.toFloat()));
}

std::ostream& operator<<(std::ostream& op, Fixed const& rhs)
{
	op << rhs.toFloat();
	return (op);
}
