/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <laube@student.42quebec.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 11:27:59 by laube             #+#    #+#             */
/*   Updated: 2021/10/23 11:30:24 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Karen {
    
    private:
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
    
    public:
        void complain(std::string level);
}
