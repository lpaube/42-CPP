/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42quebec.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 18:04:44 by laube             #+#    #+#             */
/*   Updated: 2021/12/01 16:44:58 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <map>
#include <list>
#include <vector>

#include "easyfind.hpp"

int main(void) {
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

	try {
        std::cout << "-----Map with number-------" << std::endl;
        std::map<int, std::string> num_map1;
		num_map1.insert(std::pair<int, std::string>(2, "first"));
		num_map1.insert(std::pair<int, std::string>(4, "second"));
		num_map1.insert(std::pair<int, std::string>(3, "third"));
        std::map<int, std::string>::iterator res1 = easyfind(num_map1, 4);
        std::cout << "Value: " << res1->second << std::endl;
        std::cout << std::endl;

        std::cout << "-----Map without number-------" << std::endl;
        std::map<int, std::string> num_map2;
		num_map2.insert(std::pair<int, std::string>(2, "first"));
		num_map2.insert(std::pair<int, std::string>(5, "second"));
		num_map2.insert(std::pair<int, std::string>(3, "third"));
        std::map<int, std::string>::iterator res2 = easyfind(num_map2, 4);
        std::cout << "Value: " << res2->second << std::endl;
    }
    catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;

	try {
        std::cout << "-----Multimap with number-------" << std::endl;
        std::multimap<int, std::string> num_multimap1;
		num_multimap1.insert(std::pair<int, std::string>(2, "first"));
		num_multimap1.insert(std::pair<int, std::string>(3, "second"));
		num_multimap1.insert(std::pair<int, std::string>(4, "third"));
		num_multimap1.insert(std::pair<int, std::string>(4, "fourth"));
        std::multimap<int, std::string>::iterator res1 = easyfind(num_multimap1, 4);
        std::cout << "Value: " << res1->second << std::endl;
        std::cout << std::endl;

        std::cout << "-----Multimultimap without number-------" << std::endl;
        std::multimap<int, std::string> num_multimap2;
		num_multimap2.insert(std::pair<int, std::string>(2, "first"));
		num_multimap2.insert(std::pair<int, std::string>(5, "second"));
		num_multimap2.insert(std::pair<int, std::string>(3, "third"));
        std::multimap<int, std::string>::iterator res2 = easyfind(num_multimap2, 4);
        std::cout << "Value: " << res2->second << std::endl;
    }
    catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
}
