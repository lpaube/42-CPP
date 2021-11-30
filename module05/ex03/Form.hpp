/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42quebec.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:16:24 by laube             #+#    #+#             */
/*   Updated: 2021/11/30 14:30:06 by laube            ###   ########.fr       */
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
		virtual ~Form() {}
		Form& operator=(const Form& rhs);

		const std::string& getName() const;
		bool getIsSigned() const;
		int getGradeToSign() const;
		int getGradeToExec() const;
		void beSigned(Bureaucrat& worker);
        virtual void execute(Bureaucrat const& executor) const = 0;

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

        class FormNotSignedException : public std::exception {
            private:
                const std::string _msg;

            public:
                FormNotSignedException() : _msg("The grade is too low.") {}
                FormNotSignedException(const std::string& msg) : _msg(msg) {}
                virtual ~FormNotSignedException() throw() {}
                virtual const char* what() const throw();
        };
        class FormNotFoundException : public std::exception {
            private:
                const std::string _msg;

            public:
                FormNotFoundException() : _msg("The grade is too low.") {}
                FormNotFoundException(const std::string& msg) : _msg(msg) {}
                virtual ~FormNotFoundException() throw() {}
                virtual const char* what() const throw();
        };
};

std::ostream& operator<<(std::ostream& op, const Form& rhs);
