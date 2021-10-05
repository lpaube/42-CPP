/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 06:19:08 by laube             #+#    #+#             */
/*   Updated: 2021/10/05 11:40:07 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*
 * CONSTRUCTORS
 */
Fixed::Fixed()
{
	value = 0;
}

Fixed::Fixed(const Fixed& src)
{
	value = src.value;
}

Fixed::Fixed(const int num)
{
	value = num << Fixed::fractBits;
}

Fixed::Fixed(const float num)
{
	value = roundf(num * (1 << Fixed::fractBits));
}

/*
 * DESTRUCTOR
 */
Fixed::~Fixed()
{
}

/*
 * MEMBER FUNCTIONS
 */
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
	return ((float)value / (1 << Fixed::fractBits));
}

int		Fixed::toInt(void) const
{
	return (value >> Fixed::fractBits);
}

/*
 * STATIC MEMBER FUNCTIONS
 */
Fixed&	Fixed::min(Fixed& fixPoint1, Fixed& fixPoint2)
{
	if (fixPoint1.value < fixPoint2.value)
		return (fixPoint1);
	return (fixPoint2);
}

Fixed&	Fixed::max(Fixed& fixPoint1, Fixed& fixPoint2)
{
	if (fixPoint1.value > fixPoint2.value)
		return (fixPoint1);
	return (fixPoint2);
}

const Fixed&	Fixed::min(const Fixed& fixPoint1, const Fixed& fixPoint2)
{
	if (fixPoint1.value < fixPoint2.value)
		return (fixPoint1);
	return (fixPoint2);
}

const Fixed&	Fixed::max(const Fixed& fixPoint1, const Fixed& fixPoint2)
{
	if (fixPoint1.value > fixPoint2.value)
		return (fixPoint1);
	return (fixPoint2);
}

/*
 * COMPARISON OPERATORS OVERLOAD
 */
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

/*
 * ARITHMETIC OPERATORS OVERLOAD
 */
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

Fixed&	Fixed::operator++()
{
	this->value++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed tmp = *this;
	++*this;
	return (tmp);
}

Fixed&	Fixed::operator--()
{
	this->value--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp = *this;
	--*this;
	return (tmp);
}
/*
 * ASSIGNMENT OPERATOR OVERLOAD
 */
Fixed&	Fixed::operator=(const Fixed& rhs)
{
	if (this == &rhs)
		return (*this);
	value = rhs.value;
	return (*this);
}

/*
 * OSTREAM OPERATORS OVERLOAD
 */
std::ostream& operator<<(std::ostream& op, Fixed const& rhs)
{
	op << rhs.toFloat();
	return (op);
}
