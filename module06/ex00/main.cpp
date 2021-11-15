/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42quebec.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 16:45:07 by laube             #+#    #+#             */
/*   Updated: 2021/11/15 17:24:17 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

int main(int argc, char **argv) {
	if (argc != 2) {
		std::cout << "Error: Program takes 1 argument" << std::endl;
		return 0;
	}
	string s(argv[1]);
	if (s.length() == 1) {
		//convert to char
	}
}
