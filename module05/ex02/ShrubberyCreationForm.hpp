/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <laube@student.42quebec.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 18:01:55 by laube             #+#    #+#             */
/*   Updated: 2021/11/12 22:34:04 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Form.hpp"

class ShrubberyCreationForm : public Form {
    private:
        std::string _target;

    public:
        ShrubberyCreationForm() : Form("F-Shrubbery", 145, 137), _target("home") {}
        ShrubberyCreationForm(std::string target) : Form("F-Shrubbery", 145, 137), _target(target) {}
        ShrubberyCreationForm(const ShrubberyCreationForm& src) : Form(src), _target(src._target) {}
        virtual ~ShrubberyCreationForm();
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm& rhs);

        void execute(Bureaucrat const& executor) const;
};
