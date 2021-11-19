/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42quebec.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 16:33:08 by laube             #+#    #+#             */
/*   Updated: 2021/11/19 17:25:25 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data* deserialize(uintptr_t raw) {
	return (reinterpret_cast<Data*>(raw));
}

uintptr_t serialize(Data* ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

int	main(void) {
	Data *x = new Data();
	std::cout << "Initial Data(x): " << x << std::endl;

	uintptr_t y = serialize(x);
	std::cout << "Serialized uintptr_t(y): " << y << std::endl;

	Data *z = deserialize(y);
	std::cout << "Deserialized Data(z): " << z << std::endl;

	// To show that the class is still usable
	std::cout << "num: " << z->num << std::endl;
	std::cout << "c: " << z->c << std::endl;
	std::cout << "dbl: " << z->dbl << std::endl;
}
