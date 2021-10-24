/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <laube@student.42quebec.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 15:21:17 by laube             #+#    #+#             */
/*   Updated: 2021/10/24 16:02:07 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(void) {
    Karen karen;

    karen.complain("debug");
    karen.complain("info");
    karen.complain("warning");
    karen.complain("error");
    return 0;
}
