/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42quebec.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 12:29:10 by laube             #+#    #+#             */
/*   Updated: 2021/11/15 12:42:30 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Form.hpp"

class Intern {
	public:
		Intern() {}
		Intern(const Intern& src) {}
		~Intern() {}
		operator=(const Intern& rhs) {}

		*Form makeForm(std::string *formName, std::string *target);
};
