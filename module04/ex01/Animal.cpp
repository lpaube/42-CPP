/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 15:03:03 by laube             #+#    #+#             */
/*   Updated: 2021/10/09 13:48:07 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
	std::cout << "An animal has been born!" << std::endl;
}

Animal::Animal(const Animal& src) {
	type = src.type;
	std::cout << "An animal has been born!" << std::endl;
}

Animal::~Animal() {
	std::cout << "An animal has died!" << std::endl;
}

Animal& Animal::operator=(const Animal& rhs) {
	if (this == &rhs) return (*this);
	type = rhs.type;
	return (*this);
}

void Animal::makeSound() const {
	if (type.size() == 0)
		std::cout << "This animal is of the silent type..." << type << std::endl;
	else if (type.compare("Dog") == 0)
		std::cout << "Woof" << std::endl;
	else if (type.compare("Cat") == 0)
		std::cout << "Miaou" << std::endl;
}

const std::string Animal::getType() const {
	return (this->type);
}

void Animal::setType(std::string type) {
	this->type = type;
}
