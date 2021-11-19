/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 22:55:07 by laube             #+#    #+#             */
/*   Updated: 2021/11/19 16:53:24 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
  type = "Cat";
  brain = new Brain();
  std::cout << "The animal is a cat!" << std::endl;
}

Cat::Cat(const Cat& src) {
  type = src.type;
  brain = new Brain;
  *brain = *(src.brain);
  std::cout << "The animal is a cat!" << std::endl;
}

Cat::~Cat() {
  delete brain;
  std::cout << "The cat is dead." << std::endl;
}

Cat& Cat::operator=(const Cat& rhs) {
  if (this == &rhs) return (*this);
  type = rhs.type;
  *brain = *(rhs.brain);
  return (*this);
}

std::string* Cat::getIdeas() const { return (this->brain->ideas); }

void Cat::makeSound() const {
  if (type.size() == 0)
    std::cout << "This animal is of the silent type..." << type << std::endl;
  else if (type.compare("Dog") == 0)
    std::cout << "Woof" << std::endl;
  else if (type.compare("Cat") == 0)
    std::cout << "Miaou" << std::endl;
}
