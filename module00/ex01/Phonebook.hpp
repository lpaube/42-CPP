/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42quebec.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 17:55:02 by laube             #+#    #+#             */
/*   Updated: 2021/10/18 17:55:04 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string.h>
# include <stdio.h>
# include <iomanip>
# include "Contact.hpp"
# include <stdlib.h>

class	Phonebook
{
	public:
		Phonebook();
		Contact	contacts[8];
		int		contact_amt;

		void	add_contact(void);
		void	get_index(void);
		void	search_contact(void);
};

#endif
