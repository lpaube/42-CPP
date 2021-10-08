/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 14:58:41 by laube             #+#    #+#             */
/*   Updated: 2021/10/08 10:59:20 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
	protected:
		std::string type;
	public:
		Animal();
		Animal(const Animal& src);
		virtual ~Animal();

		Animal& operator=(const Animal& rhs);

		virtual void makeSound() const;
		virtual const std::string getType() const;
		virtual void setType(std::string type);
};

#endif
