/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 15:03:03 by laube             #+#    #+#             */
/*   Updated: 2021/10/09 17:05:54 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() { std::cout << "An animal has been born!" << std::endl; }

Animal::Animal(const Animal& src) {
  type = src.type;
  std::cout << "An animal has been born!" << std::endl;
}

Animal::~Animal() { std::cout << "An animal has died!" << std::endl; }

Animal& Animal::operator=(const Animal& rhs) {
  if (this == &rhs) return (*this);
  type = rhs.type;
  return (*this);
}

const std::string Animal::getType() const { return (this->type); }

void Animal::setType(std::string type) { this->type = type; }
