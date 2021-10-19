/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <louis-philippe.aube@hotmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 14:25:45 by laube             #+#    #+#             */
/*   Updated: 2021/10/18 23:30:51 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact {
 private:
  int is_active;
  int index;
  std::string first_name;
  std::string last_name;
  std::string nickname;
  std::string phone_num;
  std::string secret;

 public:
  Contact();
  std::string& getStr(std::string var);
  int& getInt(std::string var);
};

#endif
