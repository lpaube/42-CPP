/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 09:04:19 by laube             #+#    #+#             */
/*   Updated: 2021/10/01 11:30:10 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class	Fixed
{
	private:
		int	value;
		static const int	fract_bits = 8;
	public:
		Fixed();	// Canonical
		~Fixed();	// Canonical
		Fixed(const Fixed& src);	// Canonical
		Fixed& 	operator=(const Fixed& dst); // Canonical
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif
