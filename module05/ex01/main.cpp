/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <louis-philippe.aube@hotmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 20:15:46 by laube             #+#    #+#             */
/*   Updated: 2021/11/12 15:54:22 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main(void)
{
    // Generic Form
    Bureaucrat john(1);
    Form generic_form;
    
    std::cout << "BEFORE SIGNING\n--------------" << std::endl;
    std::cout << john << std::endl;
    std::cout << generic_form << std::endl;
    generic_form.beSigned(john);
    std::cout << "AFTER SIGNING\n--------------" << std::endl;
    std::cout << generic_form << std::endl;

    // beSigned: Grade too low
    std::cout << "LIMMY GRADE TOO LOW (beSigned):\n------------" << std::endl;
    try 
    {
        Bureaucrat limmy("Limmy", 100);
        Form f1120("1120-F", 10, 10);

        std::cout << limmy << f1120 << std::endl;

        f1120.beSigned(limmy);
    }
    catch (std::exception const &e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << std::endl;

    std::cout << "JIMMY GRADE GOOD (beSigned):\n------------" << std::endl;
    try 
    {
        Bureaucrat jimmy("Jimmy", 1);
        Form f1120("1120-F", 10, 10);

        std::cout << jimmy << f1120 << std::endl;

        f1120.beSigned(jimmy);
        std::cout << f1120 << std::endl;
    }
    catch (std::exception const &e)
    {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "JANE GRADE TOO LOW (signForm):\n------------" << std::endl;
    try
    {
        Bureaucrat jane("Jane", 100);
        Form w4("W-4", 99, 99);

        std::cout << jane << w4 << std::endl;
        jane.signForm(w4);
        std::cout << w4 << std::endl;

        jane.incGrade();
        std::cout << jane << std::endl;
        jane.signForm(w4);
        std::cout << jane << w4 << std::endl;
    }
    catch (std::exception const &e)
    {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "FORM GRADE TOO LOW:\n------------" << std::endl;
    try
    {
        Form w4("W-4", 151, 151);
    }
    catch (std::exception const &e)
    {
        std::cerr << e.what() << std::endl;
    }

    return (0);
}
