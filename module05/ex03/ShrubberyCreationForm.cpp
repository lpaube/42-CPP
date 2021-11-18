/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <laube@student.42quebec.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 17:49:30 by laube             #+#    #+#             */
/*   Updated: 2021/11/14 19:08:29 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& rhs) {
    Form::operator=(rhs);
    _target = rhs._target;
    return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const& executor) const {
    Form::execute(executor);
    std::string trees =
    "             ,@@@@@@@,\n" \
    "     ,,,.   ,@@@@@@/@@,  .oo8888o.\n" \
    "  ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n" \
    " ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n" \
    " %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n" \
    " %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n" \
    " `&%\\ ` /%&'    |.|        \\ '|8'\n" \
    "     |o|        | |         | |\n" \
    "     |.|        | |         | |\n" \
    "   \\/ ._\\//_/__/  ,\\_//__\\ /.  \\_//__/_\n";

    std::ofstream myFile((_target + "_shrubbery").c_str());
    myFile << trees;
    myFile.close();
}
