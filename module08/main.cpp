/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42quebec.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 18:04:44 by laube             #+#    #+#             */
/*   Updated: 2021/11/27 18:06:42 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "easyfind.hpp"

int main(void) {
	std::list<int> num_list;
	std::cout << easyfind(num_list, 4) << std::endl;
}
