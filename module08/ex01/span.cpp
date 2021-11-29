/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42quebec.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 13:02:59 by laube             #+#    #+#             */
/*   Updated: 2021/11/29 13:33:43 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdexcept>

#include "span.hpp"

Span::Span() {}

template<typename N>
Span::Span(unsigned int N) : _capacity(N) {}

Span::Span(const &Span rhs) : _capacity(rhs._capacity) {}

Span::~Span() {}

&Span Span::operator=(const &Span src) {
	_capacity = src._capacity;
}

void Span::addNumber(int num) {
	if (_num_vec.size() >= _capacity)
		throw std::out_of_range("The numbers stored is already at capacity");
	_num_vec.push_back(num);
}

unsigned int Span::shortestSpan() const {
	if (
	std::vector<int>::iterator ite = _num_vec.end();
	for (std::vector<int>::iterator it = _num_vec.begin(); it != ite; it++) {
		
	}
}

unsigned int Span::longestSpan() const {
	
}
