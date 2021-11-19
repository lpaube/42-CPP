/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 22:44:26 by laube             #+#    #+#             */
/*   Updated: 2021/11/19 15:59:56 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
 private:
  Brain* brain;

 public:
  Dog();
  Dog(const Dog& src);
  virtual ~Dog();

  Dog& operator=(const Dog& rhs);

  virtual void makeSound() const;
  std::string* getIdeas() const;
};

#endif
