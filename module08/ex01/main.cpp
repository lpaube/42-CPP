/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42quebec.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 14:34:56 by laube             #+#    #+#             */
/*   Updated: 2021/11/29 18:20:03 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <array>

#include "span.hpp"

int main(void) {
	std::cout << "--------Simple data-------" << std::endl;
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	std::cout << std::endl;

	std::cout << "--------Iterators (100)---------" << std::endl;
	std::array<int, 100> arr;
	for (int i = 0; i < arr.size(); i++) {
		arr[i] = i * 2;
	}
	std::array<int, 100>::iterator it = arr.begin();
	std::array<int, 100>::iterator ite = arr.end();
	Span sp2 = Span(100);
	sp2.addNumber<std::array<int, 100>::iterator>(it, ite);
}
