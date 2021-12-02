/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <laube@student.42quebec.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 16:51:14 by laube             #+#    #+#             */
/*   Updated: 2021/12/02 00:14:57 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <algorithm>
#include <stack>
#include <iterator>

template<typename T>
class MutantStack : public std::stack<T> {
    public:
        MutantStack() : std::stack<T>() {}
        ~MutantStack() {}
        MutantStack(MutantStack<T> const& src) : std::stack<T>(src) {}

        MutantStack<T>& operator=(MutantStack<T> const& rhs);

        typedef typename MutantStack<T>::container_type::iterator iterator;

        iterator begin() {return(this->c.begin());}
        iterator end() {return(this->c.end());}
};
