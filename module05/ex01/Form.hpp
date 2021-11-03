/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42quebec.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:16:24 by laube             #+#    #+#             */
/*   Updated: 2021/11/03 16:49:41 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"

class Form {
	private:
		const std::string _name;
		bool _signed;
		const int _gradeToSign;
		const int _gradeToExec;

	public:
		// Constructors & Destructors
		Form() : _name("1120-F"), _gradeToSign(1), _gradeToExec(1) {}
		Form(std::string name) : _name(name), _gradeToSign(1), _gradeToExec(1) {}
		Form(std::string name, int gradeToSign) : _name(name), _gradeToSign(gradeToSign), _gradeToExec(1) {}
		Form(std::string name, int gradeToSign, int gradeToExec) : _name(name), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec) {}
		Form(const Form& src);
		~Form() {}

		Form& operator=(const Form& rhs);

		// Getters and functions
		const std::string& getName() const;
		bool getIsSigned() const;
		int getGradeToSign() const;
		int getGradeToExec() const;
		void beSigned(Bureaucrat worker);

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
