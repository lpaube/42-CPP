/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <laube@student.42quebec.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 20:13:40 by laube             #+#    #+#             */
/*   Updated: 2021/11/18 12:48:16 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>

#include "Converter.hpp"

Converter::Converter(std::string arg) : value(arg), type(INVALID) {
	std::stringstream ss;
	size_t i;

	i = 0;
	if (special_case())
		return;
	while (isdigit(value[i])) {
		ss << value[i++];
		type = INT;
		if (i >= value.length())
			return;
	}
	if (value[i] == '.') {
		type = DOUBLE;
		ss << value[i++];
		if (!isdigit(value[i])) {
			type = INVALID;
			return;
		}
		while (isdigit(value[i])) {
			ss << value[i++];
			if (i >= value.length())
				return;
		}
	}
}

int Converter::special_case() {
	if (value == "-inf" || value == "+inf" || value == "nan") {
		type = SPECIAL;
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << value + "f" << std::endl;
		std::cout << "double: " << value << std::endl;
		return 1;
	}
	else if (value == "-inff" || value == "+inff" || value == "nanf") {
		type = SPECIAL;
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << value << std::endl;
		std::cout << "double: " << value.substr(0, value.length() - 1) << std::endl;
		return 1;
	}
	return 0;
}

void Converter::parse() {
	if (type == SPECIAL)
		return;
	else if (type == INVALID) {
		std::cout << "Error: Input not a literal" << std::endl;
	}
	else {
		convert_char();
		convert_int();
		convert_float();
		convert_double();
	}
}

void Converter::convert_char() {
	if (type == CHAR) {
		std::cout << "char: " << cval << std::endl;
	} else if (type == INT) {
		
	}
}

void Converter::convert_int() {

}

void Converter::convert_float() {

}

void Converter::convert_double() {

}
