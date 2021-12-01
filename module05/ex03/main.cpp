/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <louis-philippe.aube@hotmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 20:15:46 by laube             #+#    #+#             */
/*   Updated: 2021/12/01 00:39:04 by laube            ###   ########.fr       */
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
        std::cout << "------Robotomy 'Robotomy'------" << std::endl;
        Intern someRandomIntern;
        Form* rrf;
        rrf = someRandomIntern.makeForm("Robotomy", "Bender");

        Bureaucrat john = Bureaucrat("John", 1);
        rrf->beSigned(john);
        rrf->execute(john);
        delete rrf;
    }
    catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;

    try {
        std::cout << "------Robotomy 'robotomy request'------" << std::endl;
        Intern someRandomIntern;
        Form* rrf;
        rrf = someRandomIntern.makeForm("robotomy request", "Steve");

        Bureaucrat john = Bureaucrat("John", 10);
        rrf->beSigned(john);
        rrf->execute(john);
        delete rrf;
    }
    catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;

    try {
        std::cout << "------Incorect form name 'fsf'------" << std::endl;
        Intern someRandomIntern;
        Form* rrf;
        rrf = someRandomIntern.makeForm("fsf", "Bender");
        delete rrf;
    }
    catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;

    try {
        std::cout << "------Shrubbery 'Shrubbery Creation' (target: house)------" << std::endl;
        Intern someRandomIntern;
        Form* rrf;
        rrf = someRandomIntern.makeForm("Shrubbery Creation", "house");

        Bureaucrat john = Bureaucrat("John", 10);
        rrf->beSigned(john);
        rrf->execute(john);
        std::cout << "**Generated file house_shrubbery**" << std::endl;
        delete rrf;
    }
    catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;

    try {
        std::cout << "------Pres Pardon 'presidential'------" << std::endl;
        Intern someRandomIntern;
        Form* rrf;
        rrf = someRandomIntern.makeForm("presidential", "Remi");

        Bureaucrat john = Bureaucrat("Jimmy", 1);
        rrf->beSigned(john);
        rrf->execute(john);
        delete rrf;
    }
    catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
}
