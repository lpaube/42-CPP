/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <laube@student.42quebec.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 11:27:59 by laube             #+#    #+#             */
/*   Updated: 2021/10/24 16:02:33 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Karen.hpp"

void Karen::debug(void) {
    std::cout << "DEBUG: I love to get extra bacon for my cheese burger." << std::endl;
}

void Karen::info(void) {
    std::cout << "INFO: I cannot believe adding extra bacon cost more money." << std::endl;
}

void Karen::warning(void) {
    std::cout << "WARNING: I think I deserve to have some extra bacon for free." << std::endl;
}

void Karen::error(void) {
    std::cout << "ERROR: I want to speak to the manager." << std::endl;
}

void Karen::complain(std::string level) {
    std::string str[] = {"debug", "info", "warning", "error"};
    void (Karen::*f[])(void) = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};

    int i = 0;
    while (i < 4) {
        if (level == str[i]) break;
        i++;
    }
    switch (i) {
        case 0:
            (this->*f[0])();
            break;
        case 1:
            (this->*f[1])();
            break;
        case 2:
            (this->*f[2])();
            break;
        case 3:
            (this->*f[3])();
            break;
        default:
            std::cout << "Error: The command entered was not valid" << std::endl;
    }
}
