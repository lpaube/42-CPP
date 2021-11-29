/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42quebec.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 18:04:44 by laube             #+#    #+#             */
/*   Updated: 2021/11/28 23:31:56 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <array>

#include "easyfind.hpp"

int main(void) {
    try {
        std::cout << "-----Array with number-------" << std::endl;
        std::array<int, 4> num_array1;
        num_array1[0] = 4;
        std::array<int, 4>::iterator res1 = easyfind(num_array1, 4);
        std::cout << "Addr: " << res1 << std::endl;
        std::cout << "Value: " << *res1 << std::endl;
        std::cout << std::endl;

        std::cout << "-----Array without number-------" << std::endl;
        std::array<int, 4> num_array2;
        std::array<int, 4>::iterator res2 = easyfind(num_array2, 4);
        std::cout << "Addr: " << res2 << std::endl;
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
}
