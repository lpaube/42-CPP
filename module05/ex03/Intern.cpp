/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42quebec.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 12:30:43 by laube             #+#    #+#             */
/*   Updated: 2021/12/01 00:29:23 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

Form* shrub(std::string target) {
    ShrubberyCreationForm* shrub = new ShrubberyCreationForm(target);
    return shrub;
}

Form* robot(std::string target) {
    RobotomyRequestForm* robot = new RobotomyRequestForm(target);
    return robot;
}

Form* pres(std::string target) {
    PresidentialPardonForm* pres = new PresidentialPardonForm(target);
    return pres;
}

Form* Intern::makeForm(std::string formName, std::string target) {
    Form* (*f[3])(std::string) = {shrub, robot, pres};
    std::string form_array[3][4] = {
        {"shrubbery creation", "shrubbery", "Shrubbery Creation", "Shrubbery"},
        {"robotomy request", "robotomy", "Robotomy Request", "Robotomy"},
        {"presidential pardon", "presidential", "Presidential Pardon", "Presidential"}
    };
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            if (formName.compare(form_array[i][j]) == 0)
                return f[i](target);
        }
    }
    throw Form::FormNotFoundException("The form name doesn't match any form");
}
