/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 14:58:41 by laube             #+#    #+#             */
/*   Updated: 2021/11/24 17:00:10 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
 protected:
  std::string type;

 public:
  Animal();
  Animal(const Animal& src);
  virtual ~Animal();

  Animal& operator=(const Animal& rhs);

  virtual void makeSound() const = 0;
  virtual void setType(std::string type);
  virtual const std::string getType() const;
};

#endif
