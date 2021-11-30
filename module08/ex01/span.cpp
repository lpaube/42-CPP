/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42quebec.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 13:02:59 by laube             #+#    #+#             */
/*   Updated: 2021/11/30 13:43:50 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdexcept>
#include <cmath>

#include "span.hpp"

Span::Span() {}

Span::Span(unsigned int N) : _capacity(N) {}

Span::Span(const Span& rhs) : _capacity(rhs._capacity) {
    _num_vec.clear();
    _num_vec = rhs._num_vec;
}

Span::~Span() {}

Span& Span::operator=(const Span& src) {
	_capacity = src._capacity;
    _num_vec.clear();
    _num_vec = src._num_vec;
	return *this;
}

void Span::addNumber(int num) {
	if (_num_vec.size() >= _capacity)
		throw std::out_of_range("The numbers stored are already at capacity");
	_num_vec.push_back(num);
	std::sort(_num_vec.begin(), _num_vec.end());
}

unsigned int Span::shortestSpan() const {
	std::vector<int>::const_iterator it = _num_vec.begin();
	std::vector<int>::const_iterator ite = _num_vec.end();

	if (_num_vec.size() <= 1)
		throw std::out_of_range("Cannot get a span with 0 or 1 element");
	unsigned int short_span = std::abs(*(it + 1) - *it);
	it++;
	while (it + 1 != ite) {
		if (std::abs(*(it + 1) - *it) < short_span)
			short_span = std::abs(*(it + 1) - *it);
		it++;
	}
	return short_span;
}

unsigned int Span::longestSpan() const {
	std::vector<int>::const_iterator it = _num_vec.begin();
	std::vector<int>::const_iterator ite = _num_vec.end();

	if (_num_vec.size() <= 1)
		throw std::out_of_range("Cannot get a span with 0 or 1 element");
	int min_ele = *std::min_element(it, ite);
	int max_ele = *std::max_element(it, ite);
	return (std::abs(max_ele - min_ele));
}
