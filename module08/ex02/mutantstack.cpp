/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <laube@student.42quebec.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 16:51:20 by laube             #+#    #+#             */
/*   Updated: 2021/12/02 00:16:23 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"


template <typename T>
MutantStack<T>& MutantStack<T>::operator=(MutantStack<T> const& rhs) {
    std::stack<T>::operator=(rhs);
    return *this;
}
