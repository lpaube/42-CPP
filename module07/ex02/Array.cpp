/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42quebec.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 11:41:32 by laube             #+#    #+#             */
/*   Updated: 2021/11/25 13:02:33 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template<typename T>
Array<T>::Array() {
	arr = new T[]();
}

template<typename T>
Array<T>::Array(unsigned int n) {
	arr_len = n;
	arr = new T[n]();
}

template<typename T>
Array<T>::Array(const T &src) {
	
}

template<typename T>
Array<T>::operator=(const T &rhs) {
	
}
