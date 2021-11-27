/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <laube@student.42quebec.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 21:56:22 by laube             #+#    #+#             */
/*   Updated: 2021/11/27 15:56:47 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

int main(void) {
	std::cout << "-----------EMPTY ARRAY INITIALIZATION------------" << std::endl;
	Array<int> test1;
	try {
		std::cout << "Empty array: " << test1[0] << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "-----------UNSIGNED INT ARRAY INITIALIZATION------------" << std::endl;
	Array<int> test2(4);
	test2[3] = 6;
	std::cout << "Unsigned int array: " << std::endl;
	std::cout << "[0]: " << test2[0] << std::endl;
	std::cout << "[1]: " << test2[1] << std::endl;
	std::cout << "[2]: " << test2[2] << std::endl;
	std::cout << "[3]: " << test2[3] << std::endl;
	std::cout << std::endl;

	std::cout << "-----------COPY CONSTRUCTOR INITIALIZATION------------" << std::endl;
	Array<int> test3(test2);
	std::cout << "[0]: " << test2[0] << std::endl;
	std::cout << "[1]: " << test2[1] << std::endl;
	std::cout << "[2]: " << test2[2] << std::endl;
	std::cout << "[3]: " << test2[3] << std::endl;
	test2[3] = 2;
	std::cout << std::endl;
	std::cout << "test2[3] after change: " << test2[3] << std::endl;
	std::cout << "test3[3] after change: " << test3[3] << std::endl;
	std::cout << std::endl;

	std::cout << "----------- ACCESSING OUT OF BOUNDS OF ARRAY ------------" << std::endl;
	try {
		int x = test2[9];
		std::cout << x << std::endl;
	}
	catch (std::exception& e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "----------GETTING SIZE-------------" << std::endl;
	std::cout << "Size of test2: " << test2.size() << std::endl;
}
