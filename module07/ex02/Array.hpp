/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42quebec.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:25:03 by laube             #+#    #+#             */
/*   Updated: 2021/11/25 14:50:30 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template<typename T>
class Array {
	private:
		int arr_len;
		T *arr;
	public:
		Array();
		Array(unisgned int n);
		Array(const T &src);
		operator=(const T &rhs);
}
