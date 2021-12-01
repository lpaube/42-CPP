/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42quebec.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 12:58:52 by laube             #+#    #+#             */
/*   Updated: 2021/12/01 15:04:36 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>
#include <vector>

class Span {
	private:
		unsigned int _capacity;
		std::vector<int> _num_vec;
	public:
		Span();
		Span(unsigned int N);
		Span(const Span& rhs);
		~Span();

		Span& operator=(const Span& src);

		void addNumber(int num);

		template<typename T>
		void addNumber(T it, T ite) {
			if (std::distance(it, ite) > _capacity - static_cast<long int>(_num_vec.size()))
				throw std::out_of_range("Adding the numbers in the range would exceed capacity");
			_num_vec.insert(_num_vec.begin(), it, ite);
			std::sort(_num_vec.begin(), _num_vec.end());
		}

		unsigned int shortestSpan() const;
		unsigned int longestSpan() const;
};
