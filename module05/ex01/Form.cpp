/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42quebec.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:08:36 by laube             #+#    #+#             */
/*   Updated: 2021/11/03 22:58:46 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#include "Form.hpp"

Form::Form() : _name("1120-F"), _signed(0) ,_gradeToSign(1), _gradeToExec(1) {}

Form::Form(std::string name) : _name(name), _signed(0), _gradeToSign(1), _gradeToExec(1) {}

Form::Form(std::string name, int gradeToSign) : _name(name), _signed(0), _gradeToSign(gradeToSign), _gradeToExec(1) {
    if (_gradeToSign < 1)
        throw Form::GradeTooHighException();
    if (_gradeToSign > 150)
        throw Form::GradeTooLowException();
}

Form::Form(std::string name, int gradeToSign, int gradeToExec) :
    _name(name), _signed(0), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec) {
    if (_gradeToSign < 1 || _gradeToExec < 1)
        throw Form::GradeTooHighException();
    if (_gradeToSign > 150 || _gradeToExec > 150)
        throw Form::GradeTooLowException();
}

Form::Form(const Form& src) :
    _name(src._name), _signed(src._signed), _gradeToSign(src._gradeToSign), _gradeToExec(src._gradeToExec) {}

Form& Form::operator=(const Form& rhs) {
    if (this == &rhs) return (*this);
	_signed = rhs._signed;
    return (*this);
}

const std::string& Form::getName() const {
    return (_name);
}

bool Form::getIsSigned() const {
    return _signed;
}

int Form::getGradeToSign() const {
    return _gradeToSign;
}

int Form::getGradeToExec() const {
    return _gradeToExec;
}

const char* Form::GradeTooHighException::what() const throw() {
	return _msg.c_str();
}

const char* Form::GradeTooLowException::what() const throw() {
	return _msg.c_str();
}

void Form::beSigned(Bureaucrat& worker) {
	if (worker.getGrade() > this->_gradeToSign)
		throw Form::GradeTooLowException("The bureaucrat's grade is too low to sign.");
	else
		this->_signed = 1;
}

std::ostream& operator<<(std::ostream& op, const Form& rhs) {
	std::string isSigned = "No";
	op << "Form name: " << rhs.getName() << std::endl;
	if (rhs.getIsSigned() == 1)
		isSigned = "Yes";
	op << "Signed: " << isSigned << std::endl;
	op << "Grade to sign: " << rhs.getGradeToSign() << std::endl;
	op << "Grade to execute: " << rhs.getGradeToSign() << std::endl;
    return op;
}
