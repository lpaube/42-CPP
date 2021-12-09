/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42quebec.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:29:01 by laube             #+#    #+#             */
/*   Updated: 2021/12/09 12:50:19 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "iter.hpp"

template<typename T>
void print_it(T x) {
	std::cout << x << std::endl;
}

int main(void) {
	// print int
	int arr1[5] = {4, 6, 5, 4, 2};
	iter(arr1, 5, print_it);
	std::cout << std::endl;

	// print char
	char arr2[3] = {'d', 'e', 'f'};
	iter(arr2, 3, print_it);
	std::cout << std::endl;

	// print type of template instance
	double arr3[4] = {4.44, 3.33, 2.22222, 9.9};
	iter(arr3, 4, print_it);
	std::cout << std::endl;
}
