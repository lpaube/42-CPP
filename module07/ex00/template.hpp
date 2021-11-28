/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   template.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42quebec.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 12:54:21 by laube             #+#    #+#             */
/*   Updated: 2021/11/28 14:03:21 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template<typename T>
void swap(T& x, T& y) {
	T tmp = x;
	x = y;
	y = tmp;
}

template<typename T>
const T	max(const T& x, const T& y) {
	return (x >= y ? x : y);
}

template<typename T>
const T min(const T& x, const T& y) {
	return (x <=y ? x : y);
}
