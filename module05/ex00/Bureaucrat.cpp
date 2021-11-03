/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <louis-philippe.aube@hotmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 16:47:05 by laube             #+#    #+#             */
/*   Updated: 2021/11/03 13:43:12 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade) {
	if (this->_grade > 150) {
		throw Bureaucrat::GradeTooLowException("The grade is too low.");
	}
	if (this->_grade < 1) {
		throw Bureaucrat::GradeTooHighException("The grade is too high.");
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat& src) {
    _name = src._name;
    _grade = src._grade;
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& rhs) {
    if (this == &rhs) return (*this);
    _name = rhs._name;
    _grade = rhs._grade;
    return (*this);
}

const std::string Bureaucrat::getName() const {
    return (_name);
}

int Bureaucrat::getGrade() const {
    return (_grade);
}

void Bureaucrat::incGrade() {
    _grade--;
}

void Bureaucrat::decGrade() {
    _grade++;
}

std::ostream& operator<<(std::ostream& op, Bureaucrat const& rhs) {
    op << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << "." << std::endl;
    return op;
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return _msg.c_str();
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return _msg.c_str();
}
