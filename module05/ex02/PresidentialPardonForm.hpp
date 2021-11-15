/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <laube@student.42quebec.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 18:42:48 by laube             #+#    #+#             */
/*   Updated: 2021/11/14 18:57:30 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

#pragma once

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
