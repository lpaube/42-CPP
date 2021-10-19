/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <louis-philippe.aube@hotmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 14:17:08 by laube             #+#    #+#             */
/*   Updated: 2021/10/18 23:40:31 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {
  this->is_active = 0;
  this->index = 0;
}

std::string& Contact::getStr(std::string var) {
  if (var == "first_name")
    return (first_name);
  else if (var == "last_name")
    return (last_name);
  else if (var == "nickname")
    return (nickname);
  else if (var == "phone_num")
    return (phone_num);
  return (secret);
}

int& Contact::getInt(std::string var) {
  if (var == "is_active") return (is_active);
  return (index);
}
