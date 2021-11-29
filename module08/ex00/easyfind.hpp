/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42quebec.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 17:41:32 by laube             #+#    #+#             */
/*   Updated: 2021/11/29 15:37:26 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdexcept>
#include <algorithm>

template<typename T>
typename T::iterator easyfind(T& num_container, int num) {

	typename T::iterator it = num_container.begin();
	typename T::iterator ite = num_container.end();

	typename T::iterator res = std::find(it, ite, num);
	if (res != ite)
		return res;
	throw std::invalid_argument("Number not found");
}
