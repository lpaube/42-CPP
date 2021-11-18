/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <laube@student.42quebec.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 20:13:53 by laube             #+#    #+#             */
/*   Updated: 2021/11/18 12:37:38 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Converter {
    public:
        Converter(std::string arg);
        Converter(Converter& src);
        ~Converter() {}
        Converter& operator=(const Converter& rhs);

        std::string value;
        int type;

        char    cval;
        int     ival;
        float   fval;
        double  dval;

        enum Type {
            INVALID,
			SPECIAL,
            CHAR,
            INT,
            FLOAT,
            DOUBLE
        };
        void parse();
		int special_case();
		void convert_char();
		void convert_int();
		void convert_float();
		void convert_double();
};
