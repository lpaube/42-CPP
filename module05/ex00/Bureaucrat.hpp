/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <laube@student.42quebec.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 16:46:34 by laube             #+#    #+#             */
/*   Updated: 2021/11/03 14:23:07 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <exception>
#include <iostream>

class Bureaucrat {
    private:
        std::string _name;
        int _grade;

    public:
        Bureaucrat() : _name("John Smith") {}
        Bureaucrat(std::string name, int grade);
        Bureaucrat(const Bureaucrat& src);
        ~Bureaucrat();
        Bureaucrat& operator=(const Bureaucrat& rhs);

        const std::string getName() const;
        int getGrade() const;
        void incGrade();
        void decGrade();

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

std::ostream& operator<<(std::ostream& op, Bureaucrat const& rhs);
