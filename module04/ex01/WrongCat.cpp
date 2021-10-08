/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 11:21:04 by laube             #+#    #+#             */
/*   Updated: 2021/10/08 11:21:53 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
	type = "WrongCat";
	std::cout << "The wrong animal is a wrong cat!" << std::endl;
}

WrongCat::WrongCat(const WrongCat& src) {
	type = src.type;
	std::cout << "The wrong animal is a wrong cat!" << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "Curiosity killed the ugly wrong cat." << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& rhs) {
	if (this == &rhs) return (*this);
	type = rhs.type;
	return (*this);
}
