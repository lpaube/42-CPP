/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <laube@student.42quebec.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 20:13:40 by laube             #+#    #+#             */
/*   Updated: 2021/11/17 14:35:15 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Converter.hpp"

Converter::Converter(std::string arg) : value(arg), type(INVALID) {
    if (value.find("f") != -1)
    {
        this->type = FLOAT;
        this->fval = 
    }
}
