/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 13:15:01 by laube             #+#    #+#             */
/*   Updated: 2021/10/09 13:37:22 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

#include <cstdlib>

Brain::Brain() {
  int ran_num;

  for (int i = 0; i < 100; i++) {
    ran_num = rand();
    if (ran_num % 3 == 0)
      this->ideas[i] = "Squirrel";
    else if (ran_num % 2 == 0)
      this->ideas[i] = "World domination";
    else
      this->ideas[i] = "Food";
  }
  std::cout << "The animal now has a brain." << std::endl;
}

Brain::Brain(const Brain& src) {
  for (int i = 0; i < 100; i++) {
    this->ideas[i] = src.ideas[i];
  }
  std::cout << "The animal now has a brain." << std::endl;
}

Brain::~Brain() {
  std::cout << "The brain is now shmutz (destroyed)." << std::endl;
}

Brain& Brain::operator=(const Brain& rhs) {
  if (this == &rhs) return (*this);
  for (int i = 0; i < 100; i++) {
    this->ideas[i] = rhs.ideas[i];
  }
  return (*this);
}
