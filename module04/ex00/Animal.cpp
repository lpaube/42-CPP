/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 15:03:03 by laube             #+#    #+#             */
/*   Updated: 2021/10/07 23:12:19 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
	std::cout << "An animal has been born!" << std::endl;
}

Animal::Animal(const Animal& src) {
	std::cout << "An animal has been born!" << std::endl;
}

Animal::~Animal() {
	std::cout << "An animal has died!" << std::endl;
}

Animal& Animal::operator=(const Animal& rhs) {
	if (this == &rhs) return (*this);
	return (*this);
}

void Animal::makeSound() {
	if (type.size() != 0)
		std::cout << "This animal is a " << type << std::endl;
	else
		std::cout << "This is an undifferentiated animal." << std::endl;
}

const std::string Animal::getType() {
	return (this->type);
}

void Animal::setType(std::string type) {
	this->type = type;
}
