/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <louis-philippe.aube@hotmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 20:15:46 by laube             #+#    #+#             */
/*   Updated: 2021/11/15 12:26:10 by laube            ###   ########.fr       */
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

	// EXECUTION FROM BUREAUCRAT
	std::cout << ">>> TESTING EXECUTION FROM BUREAUCRAT\n--------------" << std::endl;
	try
	{
		PresidentialPardonForm myForm("Marc");
		Bureaucrat will("Will", 1);

		will.signForm(myForm);
		will.executeForm(myForm);
	}
    catch (const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << std::endl;

	// ERROR: GRADE NOT HIGH ENOUGH
	std::cout << ">>> ERROR: GRADE NOT HIGH ENOUGH\n--------------" << std::endl;
	try
	{
		PresidentialPardonForm myForm("Marc");
		Bureaucrat will("Will", 149);

		will.signForm(myForm);
		will.executeForm(myForm);
	}
    catch (const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << std::endl;

	// ERROR: FORM NOT SIGNED
	std::cout << ">>> ERROR: FORM NOT SIGNED\n--------------" << std::endl;
	try
	{
		PresidentialPardonForm myForm("Marc");
		Bureaucrat will("Will", 1);

		will.executeForm(myForm);
		will.signForm(myForm);
		will.executeForm(myForm);
	}
    catch (const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << std::endl;
}
