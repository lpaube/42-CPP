/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <louis-philippe.aube@hotmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 21:16:22 by laube             #+#    #+#             */
/*   Updated: 2021/09/28 13:54:04 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class HumanA
{
	public:
		std::string	name;
		Weapon		weapon;
		
		HumanA(std::string name, Weapon &weapon);
		void	attack(void);
};
