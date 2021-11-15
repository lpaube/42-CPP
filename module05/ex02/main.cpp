/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <louis-philippe.aube@hotmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 20:15:46 by laube             #+#    #+#             */
/*   Updated: 2021/11/14 18:59:46 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
    // SHRUBBERY FORM
    std::cout << ">>> TESTING SHRUBBERY FORM (gym)\n--------------" << std::endl;
    try 
    {
        ShrubberyCreationForm myForm("gym");
        Bureaucrat john("John", 136);

        myForm.beSigned(john);
        myForm.execute(john);
        std::cout << "*Form executed: See file 'gym_shrubbery'*" << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << std::endl;

    // ROBOTOMY FORM
    std::cout << ">>> TESTING ROBOTOMY FORM\n--------------" << std::endl;
    try 
    {
        RobotomyRequestForm myForm("Tim");
        Bureaucrat john("John", 44);

        myForm.beSigned(john);
        myForm.execute(john);
        std::cout << "*Form executed*" << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << std::endl;

    // PARDON FORM
    std::cout << ">>> TESTING PARDON FORM\n--------------" << std::endl;
    try 
    {
        PresidentialPardonForm myForm("Tim");
        Bureaucrat john("John", 3);

        myForm.beSigned(john);
        myForm.execute(john);
        std::cout << "*Form executed*" << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << std::endl;
}
