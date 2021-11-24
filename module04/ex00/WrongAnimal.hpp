/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 11:11:38 by laube             #+#    #+#             */
/*   Updated: 2021/11/24 16:45:27 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
	protected:
		std::string type;
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal& src);
		virtual ~WrongAnimal();

		WrongAnimal& operator=(const WrongAnimal& rhs);

		void makeSound() const;
		virtual const std::string getType() const;
		virtual void setType(std::string type);
};

#endif
