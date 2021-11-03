/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42quebec.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:08:36 by laube             #+#    #+#             */
/*   Updated: 2021/11/03 16:42:00 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#include "Form.hpp"

Form::Form(const Form& src) {
    _name = src._name;
	_signed = src._signed;
	_gradeToSign = src.gradeToSign;
	_gradeToExec = src.gradeToExec;
}

Form& Form::operator=(const Form& rhs) {
    if (this == &rhs) return (*this);
    _name = rhs._name;
	_signed = rhs._signed;
	_gradeToSign = rhs.gradeToSign;
	_gradeToExec = rhs.gradeToExec;
    return (*this);
}

const std::string Form::getName() const {
    return (_name);
}

const char* Form::GradeTooHighException::what() const throw() {
	return _msg.c_str();
}

const char* Form::GradeTooLowException::what() const throw() {
	return _msg.c_str();
}

void beSigned(Bureaucrat& worker) {
	if (worker.getGrade() > this->_gradetoSign())
		throw Form::GradeTooLowException("The bureaucrat's grade is too low to sign.");
	else
		this->_signed = 1;
}

std::ostream& operator<<(std::ostream& op, const Form& rhs) {
	char* isSigned = "No";
	op << "Form name: " << rhs.getName() << std::endl;
	if (rhs.getIsSigned() == 1)
		isSigned = "Yes";
	op << "Signed: " << isSigned << std::endl;
	op << "Grade to sign: " << rhs.getGradeToSign() << std::endl;
	op << "Grade to execute: " << rhs.getGradeToSign() << std::endl;
}
