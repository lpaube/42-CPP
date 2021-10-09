/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 22:47:23 by laube             #+#    #+#             */
/*   Updated: 2021/10/09 17:05:44 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	type = "Dog";
	brain = new Brain();
	std::cout << "The animal is a dog!" << std::endl;
}

Dog::Dog(const Dog& src) {
	type = src.type;
	brain = new Brain;
	*brain = *(src.brain);
	std::cout << "The animal is a dog!" << std::endl;
}

Dog::~Dog() {
	delete brain;
	std::cout << "The dog is dead" << std::endl;
}

Dog& Dog::operator=(const Dog& rhs) {
	if (this == &rhs) return (*this);
	type = rhs.type;
	brain = new Brain;
	*brain = *(rhs.brain);
	return (*this);
}

std::string* Dog::getIdeas() const{
	return (this->brain->ideas);
}

void Dog::makeSound() const {
	if (type.size() == 0)
		std::cout << "This animal is of the silent type..." << type << std::endl;
	else if (type.compare("Dog") == 0)
		std::cout << "Woof" << std::endl;
	else if (type.compare("Cat") == 0)
		std::cout << "Miaou" << std::endl;
}
