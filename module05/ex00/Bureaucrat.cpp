/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <louis-philippe.aube@hotmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 16:47:05 by laube             #+#    #+#             */
/*   Updated: 2021/10/30 17:59:18 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {
    name = "Generic Bureaucrat"
    grade = 150;
}

Bureaucrat::Bureaucrat(std::string name, int grade) {
    this->name = name;
    this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& src) {
    name = src.name;
    grade = src.grade;
}

Bureaucrat::operator=(const Bureaucrat& rhs) {
    if (this == rhs) return (*this);
    name = rhs.name;
    grade = src.grade;
    return (*this);
}

std::string Bureaucrat::getName() {
    return (name);
}

int Bureaucrat::getGrade() {
    return (grade);
}

void Bureaucrat::incGrade() {
    grade--;
}

void Bureaucrat::decGrade() {
    grade++;
}

std::ostream& operator<<(std::ostream& op, Bureaucrat const& rhs) {
    op << rhs.name << ", bureaucrat grade " << rhs.grade << "." << std::endl;
    return (op);
}
