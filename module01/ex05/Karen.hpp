/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <louis-philippe.aube@hotmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 13:53:57 by laube             #+#    #+#             */
/*   Updated: 2021/10/30 14:55:01 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class Karen {
    
    private:
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
    
    public:
        void complain(std::string level);
};
