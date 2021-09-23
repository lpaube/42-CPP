/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ContactManager.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <louis-philippe.aube@hotmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 17:25:31 by laube             #+#    #+#             */
/*   Updated: 2021/09/22 14:50:57 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_MANAGER_HPP
# define CONTACT_MANAGER_HPP

# include <iostream>
# include <string.h>
# include "Contact.hpp"

class	ContactManager
{
	public:
		ContactManager();
		Contact	contacts[8];
		int		contact_amt;

		void	add_contact(void);
		void	search_contact(void);
};

#endif
