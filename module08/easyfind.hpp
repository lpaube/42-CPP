/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42quebec.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 17:41:32 by laube             #+#    #+#             */
/*   Updated: 2021/11/27 18:08:25 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template<typename T>
int easyfind(std::<T>int num_list, int y) {
	std::T<int>::const_iterator it;
	std::T<int>::const_iterator ite = num_list.end();

	for (it = num_list.begin(); it != ite; ++it) {
		if (*it == y)
			return *it;
	}
	throw std::exception;
}
