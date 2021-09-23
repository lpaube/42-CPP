/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <louis-philippe.aube@hotmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 14:25:45 by laube             #+#    #+#             */
/*   Updated: 2021/09/22 21:21:37 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact
{
	public:
		int	is_active = 0;
		std::string	first_name;
		std::string	last_name;
		std::string nickname;
		std::string phone_num;
		std::string secret;
};

#endif
