/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 22:56:57 by laube             #+#    #+#             */
/*   Updated: 2021/11/24 17:07:12 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main(void) {

	std::cout << "CREATING 2 ANIMALS\n---------------------" << std::endl;
	const Dog* doggy = new Dog();
	const Cat* catty = new Cat();
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

	std::cout << "CREATING DEEP COPY FROM ORIGINAL DOGGY\n---------------------" << std::endl;
	const Dog* doggy_copy = new Dog(*doggy);
	std::cout << std::endl;

	std::cout << "DELETING ORIGINAL DOGGY\n------------------" << std::endl;
	delete doggy;
	std::cout << std::endl;

	std::cout << "DELETING COPY DOGGY\n------------------" << std::endl;
	delete doggy_copy;
	std::cout << std::endl;

	std::cout << "DELETING OG CAT\n------------------" << std::endl;
	delete catty;
	std::cout << std::endl;

	std::cout << "CREATING ARRAY OF ANIMALS\n---------------------" << std::endl;
	Animal* animals[10];
	for (int x = 0; x < 10; x++) {
		if (x % 2 == 0)
			animals[x] = new Dog;
		else
			animals[x] = new Cat;
	}
	std::cout << std::endl;

	animals[2]->makeSound();
	animals[3]->makeSound();
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
	std::cout << "TESTTTTTT" << std::endl;

	Cat test1;
	Cat test2;
	test1 = test2;

	Dog test3;
	Dog test4;
	test3 = test4;
}
