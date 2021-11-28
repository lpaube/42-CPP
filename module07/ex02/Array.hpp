/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42quebec.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:25:03 by laube             #+#    #+#             */
/*   Updated: 2021/11/28 14:03:53 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <exception>

template<typename T>
class Array {
	private:
		unsigned int arr_len;
		T *arr;
	public:
		Array();
		Array(unsigned int n);
		Array(const Array &src);
		Array& operator=(const T &rhs);
        T& operator[](unsigned int i);

		unsigned int size();
};

template<typename T>
Array<T>::Array() {
	arr = nullptr;
	arr_len = 0;
}

template<typename T>
Array<T>::Array(unsigned int n) {
	arr_len = n;
	arr = new T[n]();
}

template<typename T>
Array<T>::Array(const Array &src) {
	arr_len = src.arr_len;
	arr = new T[arr_len]();
	for (unsigned int i = 0; i < arr_len; i++) {
		arr[i] = src.arr[i];
    }
}

template<typename T>
Array<T>& Array<T>::operator=(const T &rhs) {
	arr_len = rhs.arr_len;
	arr = new T[arr_len]();
	for (int i = 0; i < arr_len; i++) {
		arr[i] = rhs.arr[i];
	}
}

template<typename T>
T& Array<T>::operator[](unsigned int i) {
	if (i >= arr_len || i < 0) {
		throw std::exception();
	}
	return arr[i];
}

template<typename T>
unsigned int Array<T>::size() {
	return arr_len;
}
