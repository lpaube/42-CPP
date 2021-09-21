/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ContactManager.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <louis-philippe.aube@hotmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 17:25:31 by laube             #+#    #+#             */
/*   Updated: 2021/09/21 16:16:15 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_MANAGER_H
# define CONTACT_MANAGER_H

# include <iostream>
# include <string.h>

class	ContactManager
{
	public:
		Contact	contacts[8];
		int		contact_amt;

		void	add_contact(void);
		void	search_contact(void);

}

#endif
