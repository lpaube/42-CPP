/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 13:15:01 by laube             #+#    #+#             */
/*   Updated: 2021/10/08 13:37:45 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
}

Brain::Brain(const Brain& src) {
}

Brain::~Brain() {
}

Brain& Brain::operator=(const Brain& rhs) {
	if (this == &rhs) return (*this);
	return (*this);
}
