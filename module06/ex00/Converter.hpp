/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <laube@student.42quebec.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 20:13:53 by laube             #+#    #+#             */
/*   Updated: 2021/11/16 21:03:21 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Converter {
    public:
        Converter(std::string const& arg);
        Converter(const Converter& src);
        ~Converter();
        Converter& operator=(const Converter& rhs);

        enum type {
            INVALID,
            CHAR,
            INT,
            FLOAT,
            DOUBLE
        };
        void parse();
};
