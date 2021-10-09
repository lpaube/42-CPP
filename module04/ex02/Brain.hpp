/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 13:24:42 by laube             #+#    #+#             */
/*   Updated: 2021/10/08 14:05:47 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain {
 public:
  Brain();
  Brain(const Brain& src);
  ~Brain();

  Brain& operator=(const Brain& rhs);

  std::string ideas[100];
};

#endif
