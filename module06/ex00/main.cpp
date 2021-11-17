/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42quebec.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 16:45:07 by laube             #+#    #+#             */
/*   Updated: 2021/11/16 21:02:31 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#include "Converter.hpp"

int main(int argc, char const **argv) {
	if (argc != 2) {
		std::cout << "Error: Program takes 1 argument" << std::endl;
		return 0;
	}
    Converter conv(argv[1]);
}
