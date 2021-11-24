/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <laube@student.42quebec.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 16:46:32 by laube             #+#    #+#             */
/*   Updated: 2021/11/23 23:00:26 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <cstdlib>
#include <iostream>

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base* generate(void) {
    int i = rand() % 3;
    Base* base = NULL;

    if (i == 0)
        base = new A;
    if (i == 1)
        base = new B;
    if (i == 2)
        base = new C;
    return base;
}

void identify(Base* p) {
    if (dynamic_cast<A*>(p) != NULL) {
        std::cout << "A" << std::endl;
    }
    else if (dynamic_cast<B*>(p) != NULL) {
        std::cout << "B" << std::endl;
    }
    else if (dynamic_cast<C*>(p) != NULL) {
        std::cout << "C" << std::endl;
    }
}

void identify(Base& p) {
    char x = 0;

    try {
        static_cast<void>(dynamic_cast<A&>(p));
        x = 'A';
    }
    catch (std::exception e) {}

    try {
        static_cast<void>(dynamic_cast<B&>(p));
        x = 'B';
    }
    catch (std::exception e) {}

    try {
        static_cast<void>(dynamic_cast<C&>(p));
        x = 'C';
    }
    catch (std::exception e) {}

    std::cout << x << std::endl;
}

int main(void) {
    srand(time(0));

    Base* base = generate();
    identify(base);
    identify(*base);
}
