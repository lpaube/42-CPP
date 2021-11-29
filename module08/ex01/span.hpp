/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42quebec.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 12:58:52 by laube             #+#    #+#             */
/*   Updated: 2021/11/29 16:52:36 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		unsigned int shortestSpan() const;
		unsigned int longestSpan() const;
};
