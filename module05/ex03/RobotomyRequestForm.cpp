/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <laube@student.42quebec.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 14:29:03 by laube             #+#    #+#             */
/*   Updated: 2021/11/28 23:10:10 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& rhs) {
    Form::operator=(rhs);
    _target = rhs._target;
    return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const& executor) const {

    srand(time(NULL));

    int r_num = rand();
    int round_num = r_num % 2;

    Form::execute(executor);
    if (round_num == 1)
        std::cout << "*BZZZZ BZZZZZ* " << _target << " is now robotomized." << std::endl;
    else
        std::cout << "*BZZZZ WHIIIIRRR* " << _target << " robotomization has been unsuccessful." << std::endl;
}
