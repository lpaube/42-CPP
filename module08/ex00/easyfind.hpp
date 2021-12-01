/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42quebec.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 17:41:32 by laube             #+#    #+#             */
/*   Updated: 2021/12/01 16:44:27 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stdexcept>
#include <algorithm>
#include <map>

template<typename T>
typename T::iterator easyfind(T& num_container, int num) {

	typename T::iterator it = num_container.begin();
	typename T::iterator ite = num_container.end();

	typename T::iterator res = std::find(it, ite, num);
	if (res != ite)
		return res;
	throw std::invalid_argument("Number not found");
}

template<typename key, typename value>
typename std::map<key, value>::iterator easyfind(std::map<key, value>& num_map, int num) {
    typename std::map<key, value>::iterator it = num_map.begin();
    typename std::map<key, value>::iterator ite = num_map.end();

    static_cast<void>(it);
	typename std::map<key, value>::iterator res = num_map.find(num);
	if (res != ite)
		return res;
	throw std::invalid_argument("Number not found");
}

template<typename key, typename value>
typename std::multimap<key, value>::iterator easyfind(std::multimap<key, value>& num_multimap, int num) {
    typename std::multimap<key, value>::iterator it = num_multimap.begin();
    typename std::multimap<key, value>::iterator ite = num_multimap.end();

    static_cast<void>(it);
	typename std::multimap<key, value>::iterator res = num_multimap.find(num);
	if (res != ite)
		return res;
	throw std::invalid_argument("Number not found");
}
