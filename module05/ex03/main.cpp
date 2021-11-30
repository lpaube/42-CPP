/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <louis-philippe.aube@hotmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 20:15:46 by laube             #+#    #+#             */
/*   Updated: 2021/11/30 14:41:35 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void)
{
    try {
        Intern someRandomIntern;
        Form* rrf;
        rrf = someRandomIntern.makeForm("Robotomy", "Bender");

        Bureaucrat john = Bureaucrat("John", 1);
        rrf->beSigned(john);
        rrf->execute(john);
    }
    catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;

    try {
        Intern someRandomIntern;
        Form* rrf;
        rrf = someRandomIntern.makeForm("fsf", "Bender");
    }
    catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
}
