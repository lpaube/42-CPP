/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <louis-philippe.aube@hotmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 13:43:03 by laube             #+#    #+#             */
/*   Updated: 2021/09/27 15:28:10 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string>
#include <iostream>

int	main(void)
{
	std::string		str = "HI THIS IS BRAIN";
	std::string*	stringPTR = &str;
	std::string&	stringREF = str;

	std::cout << "Address of str:		" << &str << std::endl;
	std::cout << "Value of stringPTR:	" << stringPTR << std::endl;
	std::cout << "Address of stringREF:	" << &stringREF << std::endl;

	std::cout << "Value in stringPTR:	" << *stringPTR << std::endl;
	std::cout << "Value of stringREF:	" << stringREF << std::endl;
	return (0);
}