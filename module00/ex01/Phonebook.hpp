/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42quebec.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 17:55:02 by laube             #+#    #+#             */
/*   Updated: 2021/10/18 23:41:21 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <iomanip>
#include <iostream>

#include "Contact.hpp"

class Phonebook {
 private:
  Contact contacts[8];
  int contact_amt;

 public:
  Phonebook();

  void add_contact(void);
  void get_index(void);
  void search_contact(void);
};

#endif
