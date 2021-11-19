/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42quebec.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 13:05:59 by laube             #+#    #+#             */
/*   Updated: 2021/11/19 13:25:14 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data() {
	num = 5;
	c = 'f';
	dbl = 5.42;
}

Data::~Data() {}

Data::Data(const Data& src) {
	num = src.num;
	c = src.c;
	dbl = src.dbl;
}

Data& Data::operator=(const Data& rhs) {
	num = rhs.num;
	c = rhs.c;
	dbl = rhs.dbl;
	return (*this);
}

