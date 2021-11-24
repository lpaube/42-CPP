/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42quebec.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:29:01 by laube             #+#    #+#             */
/*   Updated: 2021/11/24 16:20:08 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "iter.hpp"

void print_char(char x) {
	std::cout << x << std::endl;
}

void print_int(int x) {
	std::cout << x << std::endl;
}

template<typename T>
void print_this(T x) {
	std::cout << x << std::endl;
}

int main(void) {

	// print int
	int arr1[5] = {4, 6, 5, 4, 2};
	iter<int>(arr1, 5, print_int);
	std::cout << std::endl;

	// print char
	char arr2[3] = {'d', 'e', 'f'};
	iter<char>(arr2, 3, print_char);
	std::cout << std::endl;

	// print type of template instance
	double arr3[4] = {4.44, 3.33, 2.22222, 9.9};
	iter<double>(arr3, 4, print_this<double>);
	std::cout << std::endl;
}
