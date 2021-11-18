/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <laube@student.42quebec.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 20:13:40 by laube             #+#    #+#             */
/*   Updated: 2021/11/18 16:26:16 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include <iomanip>

#include "Converter.hpp"

Converter::Converter(std::string arg) : value(arg), type(INVALID) {
	std::stringstream ss;
	size_t i;

	i = 0;
	if (special_case())
		return;
	if (value[i] == '+' || value[i] == '-') {
		ss << value[i++];
	}
	if (isdigit(value[i])) {
		while (isdigit(value[i])) {
			ss << value[i++];
			if (i >= value.length())
			{
				type = INT;
				ss >> ival;
				return;
			}
		}
	} else {
		type = INVALID;
		return;
	}
	if (value[i] == '.') {
		ss << value[i++];
		if (!isdigit(value[i])) {
			type = INVALID;
			return;
		}
		while (isdigit(value[i])) {
			ss << value[i++];
			if (i >= value.length()) {
				type = DOUBLE;
				ss >> dval;
				return;
			}
		}
		if (value[i] == 'f' && i + 1 == value.length()) {
			type = FLOAT;
			ss >> fval;
			return;
		}
		else
			type = INVALID;
			return;
	}
	else {
		type = INVALID;
		return;
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
		if (ival < -128 || ival > 127) {
			std::cout << "char: impossible" << std::endl;
		} else if (ival < 32 || ival == 127) {
			std::cout << "char: Non displayable" << std::endl;
		} else {
			cval = static_cast<char>(ival);
			std::cout << "char: " << cval << std::endl;
		}
	} else if (type == FLOAT) {
		if (static_cast<int>(fval) < -128 || static_cast<int>(fval) > 127) {
			std::cout << "char: impossible" << std::endl;
		} else if (static_cast<int>(fval) < 32 || static_cast<int>(fval) == 127) {
			std::cout << "char: Non displayable" << std::endl;
		} else {
			cval = static_cast<char>(fval);
			std::cout << "char: " << cval << std::endl;
		}
	} else if (type == DOUBLE) {
		if (static_cast<int>(dval) < -128 || static_cast<int>(dval) > 127) {
			std::cout << "char: impossible" << std::endl;
		} else if (static_cast<int>(dval) < 32 || static_cast<int>(dval) == 127) {
			std::cout << "char: Non displayable" << std::endl;
		} else {
			cval = static_cast<char>(dval);
			std::cout << "char: " << cval << std::endl;
		}
	}
}

void Converter::convert_int() {
	if (type == CHAR) {
		ival = static_cast<int>(cval);
	} else if (type == FLOAT) {
		ival = static_cast<int>(fval);
	} else if (type == DOUBLE) {
		dval = static_cast<int>(dval);
	}
	std::cout << "int: " << ival << std::endl;
}

void Converter::convert_float() {
	if (type == CHAR) {
		fval = static_cast<float>(cval);
	} else if (type == INT) {
		fval = static_cast<float>(ival);
	} else if (type == DOUBLE) {
		fval = static_cast<float>(dval);
	}
	std::cout << "float: " << std::fixed << std::setprecision(1) << fval << "f" << std::endl;
}

void Converter::convert_double() {
	if (type == CHAR) {
		dval = static_cast<double>(cval);
	} else if (type == INT) {
		dval = static_cast<double>(ival);
	} else if (type == FLOAT) {
		dval = static_cast<double>(fval);
	}
	std::cout << "double: " << fval << std::endl;
}
