/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 22:47:23 by laube             #+#    #+#             */
/*   Updated: 2021/11/24 16:38:13 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	type = "Dog";
	std::cout << "The animal is a dog!" << std::endl;
}

Dog::Dog(const Dog& src) {
	type = src.type;
	std::cout << "The animal is a dog!" << std::endl;
}

Dog::~Dog() {
	std::cout << "Dog Is Dead" << std::endl;
}

Dog& Dog::operator=(const Dog& rhs) {
	if (this == &rhs) return (*this);
	type = rhs.type;
	return (*this);
}

void Dog::makeSound() const {
	std::cout << "Woof" << std::endl;
}
