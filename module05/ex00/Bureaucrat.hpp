/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <laube@student.42quebec.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 16:46:34 by laube             #+#    #+#             */
/*   Updated: 2021/10/31 01:14:18 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class Bureaucrat {
    private:
        const std::string name;
        int grade;

    public:
        Bureaucrat();
        Bureaucrat(std::string name, int grade);
        Bureaucrat(const Bureaucrat& src);
        ~Bureaucrat();
        Bureaucrat& operator=(const Bureaucrat& rhs);

        const std::string getName();
        int getGrade();
        void incGrade();
        void decGrade();
};

std::ostream& operator<<(std::ostream& op, Bureaucrat const& rhs);
