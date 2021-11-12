/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42quebec.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:16:24 by laube             #+#    #+#             */
/*   Updated: 2021/11/12 15:00:35 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

#include "Bureaucrat.hpp"

class Form {
	private:
		const std::string _name;
		bool _signed;
		const int _gradeToSign;
		const int _gradeToExec;

	public:
		Form();
		Form(std::string name);
		Form(std::string name, int gradeToSign);
		Form(std::string name, int gradeToSign, int gradeToExec);
		Form(const Form& src);
		~Form() {}
		Form& operator=(const Form& rhs);

		const std::string& getName() const;
		bool getIsSigned() const;
		int getGradeToSign() const;
		int getGradeToExec() const;
		void beSigned(Bureaucrat& worker);

        class GradeTooHighException : public std::exception {
            private:
                const std::string _msg;

            public:
                GradeTooHighException() : _msg("The grade is too high.") {}
                GradeTooHighException(const std::string& msg) : _msg(msg) {}
                virtual ~GradeTooHighException() throw() {}
                virtual const char* what() const throw();
        };

        class GradeTooLowException : public std::exception {
            private:
                const std::string _msg;

            public:
                GradeTooLowException() : _msg("The grade is too low.") {}
                GradeTooLowException(const std::string& msg) : _msg(msg) {}
                virtual ~GradeTooLowException() throw() {}
                virtual const char* what() const throw();
        };
};

std::ostream& operator<<(std::ostream& op, const Form& rhs);
