/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 22:52:13 by laube             #+#    #+#             */
/*   Updated: 2021/11/19 15:59:48 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
 private:
  Brain* brain;

 public:
  Cat();
  Cat(const Cat& src);
  virtual ~Cat();

  Cat& operator=(const Cat& rhs);

  virtual void makeSound() const;
  std::string* getIdeas() const;
};

#endif
