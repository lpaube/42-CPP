/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42quebec.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 14:34:56 by laube             #+#    #+#             */
/*   Updated: 2021/12/01 15:02:41 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

#include "span.hpp"

int main(void) {
    try {
        std::cout << "--------Simple data-------" << std::endl;
        Span sp = Span(5);
        sp.addNumber(5);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest span: " << sp.longestSpan() << std::endl;
        std::cout << std::endl;

        std::cout << "--------Iterators (100)---------" << std::endl;
        std::vector<int> arr(100);
        for (long unsigned int i = 0; i < arr.size(); i++) {
            arr[i] = i * 2;
        }
        std::vector<int>::iterator it = arr.begin();
        std::vector<int>::iterator ite = arr.end();
        Span sp2 = Span(100);
        sp2.addNumber<std::vector<int>::iterator>(it, ite);
        std::cout << "Shortest span: " << sp2.shortestSpan() << std::endl;
        std::cout << "Longest span: " << sp2.longestSpan() << std::endl;
        std::cout << std::endl;

        std::cout << "--------Iterators (100,000)---------" << std::endl;
        std::vector<int> arr2(100000);
        for (long unsigned int i = 0; i < arr2.size(); i++) {
            arr2[i] = i * 2;
        }
        std::vector<int>::iterator it2 = arr2.begin();
        std::vector<int>::iterator ite2 = arr2.end();
        Span sp3 = Span(100000);
        sp3.addNumber<std::vector<int>::iterator>(it2, ite2);
        std::cout << "Shortest span: " << sp3.shortestSpan() << std::endl;
        std::cout << "Longest span: " << sp3.longestSpan() << std::endl;
        std::cout << std::endl;
    }
    catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    try {
        std::cout << "--------Exception exceed capacity (single value)---------" << std::endl;
        Span sp = Span(5);
        sp.addNumber(5);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        sp.addNumber(9);
    }
    catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;

    try {
        std::cout << "--------Exception exceed capacity (iterators)---------" << std::endl;
        Span sp = Span(5);
        sp.addNumber(5);
        sp.addNumber(3);
        sp.addNumber(17);
        std::vector<int> arr(5);
        for (long unsigned int i = 0; i < arr.size(); i++) {
            arr[i] = i * 2;
        }
        std::vector<int>::iterator it = arr.begin();
        std::vector<int>::iterator ite = arr.end();
        sp.addNumber<std::vector<int>::iterator>(it, ite);
    }
    catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;

    try {
        std::cout << "--------Exception not enough elements for span---------" << std::endl;
        Span sp = Span(5);
        sp.addNumber(5);
        std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest span: " << sp.longestSpan() << std::endl;
        std::cout << std::endl;
    }
    catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
}
