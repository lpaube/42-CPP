/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42quebec.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 14:34:56 by laube             #+#    #+#             */
/*   Updated: 2021/11/30 13:23:22 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <array>

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
        std::array<int, 100> arr;
        for (int i = 0; i < arr.size(); i++) {
            arr[i] = i * 2;
        }
        std::array<int, 100>::iterator it = arr.begin();
        std::array<int, 100>::iterator ite = arr.end();
        Span sp2 = Span(100);
        sp2.addNumber<std::array<int, 100>::iterator>(it, ite);
        std::cout << "Shortest span: " << sp2.shortestSpan() << std::endl;
        std::cout << "Longest span: " << sp2.longestSpan() << std::endl;
        std::cout << std::endl;

        std::cout << "--------Iterators (100,000)---------" << std::endl;
        std::array<int, 100000> arr2;
        for (int i = 0; i < arr2.size(); i++) {
            arr2[i] = i * 2;
        }
        std::array<int, 100000>::iterator it2 = arr2.begin();
        std::array<int, 100000>::iterator ite2 = arr2.end();
        Span sp3 = Span(100000);
        sp3.addNumber<std::array<int, 100000>::iterator>(it2, ite2);
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
        std::array<int, 5> arr;
        for (int i = 0; i < arr.size(); i++) {
            arr[i] = i * 2;
        }
        std::array<int, 5>::iterator it = arr.begin();
        std::array<int, 5>::iterator ite = arr.end();
        sp.addNumber<std::array<int, 5>::iterator>(it, ite);
    }
    catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
}
