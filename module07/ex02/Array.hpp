/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42quebec.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:25:03 by laube             #+#    #+#             */
/*   Updated: 2021/11/26 14:04:28 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template<typename T>
class Array {
	private:
		int arr_len;
		T *arr;
	public:
		Array();
		Array(unsigned int n);
		Array(const T &src);
		Array& operator=(const T &rhs);
        T& operator[](int i) const;
};

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
	arr_len = src.arr_len;
    arr = new T[arr_len]();
    for (int i = 0; i < arr_len; i++) {
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
T& operator[](int i) const {
    
}
