/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42quebec.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 12:30:43 by laube             #+#    #+#             */
/*   Updated: 2021/11/30 14:31:41 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

Form* Intern::makeForm(std::string formName, std::string target) {
    Form* form = NULL;

    if (formName.find("Shrubbery") != std::string::npos) {
        form = new ShrubberyCreationForm(target);
    }
    else if (formName.find("Robotomy") != std::string::npos) {
        form = new RobotomyRequestForm(target);
    }
    else if (formName.find("Presidential") != std::string::npos) {
        form = new PresidentialPardonForm(target);
    }
    else {
        throw Form::FormNotFoundException("The form name doesn't match any form");
    }
    return form;
}
