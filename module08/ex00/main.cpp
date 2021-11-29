/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42quebec.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 18:04:44 by laube             #+#    #+#             */
/*   Updated: 2021/11/29 12:48:48 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <map>
#include <list>
#include <vector>
#include <array>

#include "easyfind.hpp"

int main(void) {
    try {
        std::cout << "-----Array with number-------" << std::endl;
        std::array<int, 4> num_array1;
        num_array1[0] = 4;
        std::array<int, 4>::iterator res1 = easyfind(num_array1, 4);
        //std::cout << "Addr: " << res1 << std::endl;
        std::cout << "Value: " << *res1 << std::endl;
        std::cout << std::endl;

        std::cout << "-----Array without number-------" << std::endl;
        std::array<int, 4> num_array2;
        std::array<int, 4>::iterator res2 = easyfind(num_array2, 4);
        //std::cout << "Addr: " << res2 << std::endl;
        std::cout << "Value: " << *res2 << std::endl;
    }
    catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;

    try {
        std::cout << "-----Vector with number-------" << std::endl;
        std::vector<int> num_vector1;
        num_vector1.push_back(2);
        num_vector1.push_back(2);
        num_vector1.push_back(4);
        std::vector<int>::iterator res1 = easyfind(num_vector1, 4);
        std::cout << "Value: " << *res1 << std::endl;
        std::cout << std::endl;

        std::cout << "-----Vector without number-------" << std::endl;
        std::vector<int> num_vector2;
        num_vector2.push_back(2);
        num_vector2.push_back(3);
        num_vector2.push_back(2);
        std::vector<int>::iterator res2 = easyfind(num_vector2, 4);
        std::cout << "Value: " << *res2 << std::endl;
    }
    catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;

	try {
        std::cout << "-----List with number-------" << std::endl;
        std::list<int> num_list1;
		num_list1.assign(4, 2);
		num_list1.assign(3, 4);
        std::list<int>::iterator res1 = easyfind(num_list1, 4);
        std::cout << "Value: " << *res1 << std::endl;
        std::cout << std::endl;

        std::cout << "-----List without number-------" << std::endl;
        std::list<int> num_list2;
		num_list2.assign(4, 2);
		num_list2.assign(3, 5);
        std::list<int>::iterator res2 = easyfind(num_list2, 4);
        std::cout << "Value: " << *res2 << std::endl;
    }
    catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
}
