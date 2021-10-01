/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 09:04:19 by laube             #+#    #+#             */
/*   Updated: 2021/10/01 12:39:39 by laube            ###   ########.fr       */
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
		Fixed& 	operator=(const Fixed& dst); // Canonical
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
};

std::ostream& operator<<(std::ostream & op, Fixed const & rhs);

#endif
