/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 11:18:51 by laube             #+#    #+#             */
/*   Updated: 2021/10/08 11:22:43 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout << "An ugly wrong animal has been born!" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& src) {
	type = src.type;
	std::cout << "An ugly wrong animal has been born!" << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "An ugly wrong animal has died!" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& rhs) {
	if (this == &rhs) return (*this);
	type = rhs.type;
	return (*this);
}

void WrongAnimal::makeSound() const {
	if (type.size() == 0)
		std::cout << "This wrong animal is of the silent type..." << type << std::endl;
	else if (type.compare("WrongCat") == 0)
		std::cout << "Mia..(I am an abomination)..ou" << std::endl;
}

const std::string WrongAnimal::getType() const {
	return (this->type);
}

void WrongAnimal::setType(std::string type) {
	this->type = type;
}
