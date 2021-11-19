/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <laube@student.42quebec.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 18:42:48 by laube             #+#    #+#             */
/*   Updated: 2021/11/19 13:32:00 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Form.hpp"

class PresidentialPardonForm : public Form {
    private:
        std::string _target;

    public:
        PresidentialPardonForm() : Form("F-Pardon", 25, 5), _target("Timmy") {}
        PresidentialPardonForm(std::string target) : Form("F-Pardon", 25, 5), _target(target) {}
        PresidentialPardonForm(const PresidentialPardonForm& src) : Form(src), _target(src._target) {}
        virtual ~PresidentialPardonForm();
		PresidentialPardonForm& operator=(const PresidentialPardonForm& rhs);

        void execute(Bureaucrat const& executor) const;
};
