/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 22:47:23 by laube             #+#    #+#             */
/*   Updated: 2021/11/19 15:51:05 by laube            ###   ########.fr       */
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
	*brain = *(rhs.brain);
	return (*this);
}

std::string* Dog::getIdeas() const{
	return (this->brain->ideas);
}
