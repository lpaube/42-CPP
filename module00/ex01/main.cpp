/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <louis-philippe.aube@hotmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 15:56:56 by laube             #+#    #+#             */
/*   Updated: 2021/10/18 23:49:58 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

#include <iostream>
#include <string>

#include "Contact.hpp"
#include "Phonebook.hpp"

int str_match(char *str, const char *match) {
  int i;

  i = 0;
  while (i < (int)strlen(match)) {
    if (str[i] != match[i]) return (0);
    i++;
  }
  if (str[i] != 0) return (0);
  return (1);
}

int main(void) {
  std::string buff;
  Phonebook phonebook;

  while (std::cin.good()) {
    std::cout << std::endl;
    std::cout << "Please enter one of the following" << std::endl;
    std::cout << "'ADD'		: Add a new contact in the directory."
              << std::endl;
    std::cout << "'SEARCH'	: See the informations of a specific contact."
              << std::endl;
    std::cout << "'EXIT'		: Closes the directory and deletes all "
                 "contacts."
              << std::endl;
    std::cout << "> ";
    std::getline(std::cin >> std::ws, buff);
    if (buff == "ADD")
      phonebook.add_contact();
    else if (buff == "SEARCH")
      phonebook.search_contact();
    else if (buff == "EXIT")
      return (0);
    else
      std::cout << "Error: Invalid command" << std::endl;
  }
  return (0);
}
