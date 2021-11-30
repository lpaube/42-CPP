/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42quebec.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 12:29:10 by laube             #+#    #+#             */
/*   Updated: 2021/11/30 14:34:05 by laube            ###   ########.fr       */
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
