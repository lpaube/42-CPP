/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42quebec.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 13:06:23 by laube             #+#    #+#             */
/*   Updated: 2021/11/19 17:25:35 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stdint.h>
#include <iostream>

class Data {
	public:
		Data();
		Data(const Data& src);
		~Data();
		Data& operator=(const Data& rhs);

		int num;
		char c;
		double dbl;
};
