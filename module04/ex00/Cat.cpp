/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 22:55:07 by laube             #+#    #+#             */
/*   Updated: 2021/11/24 16:42:16 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	type = "Cat";
	std::cout << "The animal is a cat!" << std::endl;
}

Cat::Cat(const Cat& src) {
	type = src.type;
	std::cout << "The animal is a cat!" << std::endl;
}

Cat::~Cat() {
	std::cout << "Curiosity killed the cat." << std::endl;
}

Cat& Cat::operator=(const Cat& rhs) {
	if (this == &rhs) return (*this);
	type = rhs.type;
	return (*this);
}

void Cat::makeSound() const {
	std::cout << "Miaou" << std::endl;
}
