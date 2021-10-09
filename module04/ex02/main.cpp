/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 22:56:57 by laube             #+#    #+#             */
/*   Updated: 2021/10/09 17:26:12 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void) {
  // Uncomment the following line to verify that Animal is an abstract class
  // const Animal* anim = new Animal();
  std::cout << "CREATING 2 ANIMALS\n---------------------" << std::endl;
  const Dog* doggy = new Dog();
  const Cat* catty = new Cat();
  std::cout << std::endl;

  std::cout << "ANIMALS MAKING SOUND\n---------------------" << std::endl;
  doggy->makeSound();
  catty->makeSound();
  std::cout << std::endl;

  std::cout << "PRINTING CAT'S IDEAS\n---------------------" << std::endl;
  for (int i = 0; i < 5; i++) {
    std::cout << "Idea " << i << ": " << catty->getIdeas()[i] << std::endl;
  }
  std::cout << std::endl;
  std::cout << "PRINTING DOG'S IDEAS\n---------------------" << std::endl;
  for (int i = 0; i < 5; i++) {
    std::cout << "Idea " << i << ": " << doggy->getIdeas()[i] << std::endl;
  }
  std::cout << std::endl;

  std::cout << "CREATING DEEP COPY FROM ORIGINAL DOGGY\n---------------------"
            << std::endl;
  const Dog* doggy_copy = new Dog(*doggy);
  std::cout << std::endl;

  std::cout << "DELETING ORIGINAL DOGGY\n------------------" << std::endl;
  delete doggy;
  //	std::cout << "PRINTING ORIGINAL DOGGY IDEA[0]\n------------------" <<
  //std::endl; 	std::cout << "Idea 0: " << doggy->getIdeas()[0] << std::endl;
  std::cout << std::endl;

  std::cout << "PRINTING DEEP COPY DOGGY IDEA[0]\n------------------"
            << std::endl;
  std::cout << "Idea 0: " << doggy_copy->getIdeas()[0] << std::endl;
  std::cout << std::endl;

  std::cout << "DELETING COPY DOGGY AND OG CAT\n------------------"
            << std::endl;
  delete catty;
  delete doggy_copy;
  std::cout << std::endl;

  std::cout << "CREATING ARRAY OF ANIMALS\n---------------------" << std::endl;
  Animal* animals[10];
  for (int x = 0; x < 10; x++) {
    if (x % 2 == 0)
      animals[x] = new Cat;
    else
      animals[x] = new Dog;
  }
  std::cout << std::endl;

  std::cout << "PRINTING TYPE OF ANIMALS\n---------------------" << std::endl;
  for (int x = 0; x < 10; x++) {
    std::cout << x << ": " << animals[x]->getType() << std::endl;
  }
  std::cout << std::endl;

  std::cout << "DELETING ARRAY OF ANIMALS\n---------------------" << std::endl;
  for (int x = 0; x < 10; x++) {
    delete animals[x];
  }
}
