/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <laube@student.42quebec.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 14:27:53 by laube             #+#    #+#             */
/*   Updated: 2021/11/14 18:23:54 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"
#include "Form.hpp"

class RobotomyRequestForm : public Form {
    private:
        std::string _target;
        int _robotomized;

    public:
        RobotomyRequestForm() : Form("F-Robotomy", 72, 45), _target("Generic Eric"), _robotomized(0) {}
        RobotomyRequestForm(std::string target) : Form("F-Robotomy", 72, 45), _target(target), _robotomized(0) {}
        RobotomyRequestForm(const RobotomyRequestForm& src) : Form(src), _target(src._target), _robotomized(src._robotomized) {}
        virtual ~RobotomyRequestForm();
        RobotomyRequestForm& operator=(const RobotomyRequestForm& rhs);

        void execute(Bureaucrat const& executor) const;
};
