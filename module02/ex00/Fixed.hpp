/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 09:04:19 by laube             #+#    #+#             */
/*   Updated: 2021/10/01 10:26:25 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class	Fixed
{
	private:
		int	value;
		static const int	fract_bits;
	public:
		Fixed();	// Canonical
		~Fixed();	// Canonical
		Fixed(const Fixed& src);	// Canonical
		Fixed& 	operator=(const Fixed& dst); // Canonical
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};
