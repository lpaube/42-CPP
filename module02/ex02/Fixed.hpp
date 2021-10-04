/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 09:04:19 by laube             #+#    #+#             */
/*   Updated: 2021/10/04 17:35:35 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class	Fixed
{
	private:
		int	value;
		static const int	fract_bits = 8;
	public:
		Fixed();	// Canonical
		Fixed(const Fixed& src);	// Canonical
		Fixed(const int num);
		Fixed(const float num);
		~Fixed();	// Canonical

		Fixed& 	operator=(const Fixed& rhs); // Canonical
		int		operator>(const Fixed& rhs);
		int		operator<(const Fixed& rhs);
		int		operator>=(const Fixed& rhs);
		int		operator<=(const Fixed& rhs);
		int		operator==(const Fixed& rhs);
		int		operator!=(const Fixed& rhs);
		Fixed	operator+(const Fixed& rhs);
		Fixed	operator-(const Fixed& rhs);
		Fixed	operator*(const Fixed& rhs);
		Fixed	operator/(const Fixed& rhs);

		int		getValue(void) const;
		void	setValue(int const new_val);
		float	toFloat(void) const;
		int		toInt(void) const;
};

std::ostream& operator<<(std::ostream & op, Fixed const & rhs);

#endif
