/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42quebec.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 17:41:32 by laube             #+#    #+#             */
/*   Updated: 2021/11/28 23:06:20 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdexcept>
#include <vector>
#include <exception>

template<typename T>
typename T::iterator easyfind(T& num_container, int y) {

	typename T::iterator it;
	typename T::iterator ite = num_container.end();

	for (it = num_container.begin(); it != ite; ++it) {
		if (*it == y)
        {
			return it;
        }
	}
	throw std::invalid_argument("Number not found");
}
