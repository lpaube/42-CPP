/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42quebec.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 12:29:10 by laube             #+#    #+#             */
/*   Updated: 2021/12/01 00:22:52 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Form.hpp"

class Intern {
	public:
		Intern() {}
		Intern(const Intern& src) {(void)src;}
		~Intern() {}
		Intern& operator=(const Intern& rhs) {
            (void)rhs;
            return *this;
        }

        Form* makeForm(std::string formName, std::string target);

};

Form* shrub(std::string target);
Form* robot(std::string target);
Form* pres(std::string target);
