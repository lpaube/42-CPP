/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <laube@student.42quebec.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 19:21:07 by laube             #+#    #+#             */
/*   Updated: 2021/10/22 23:43:31 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void sed_match(std::ifstream og_file, char* s1) {
    while (
}

int main(int argc, char **argv) {
    (void)argc;
    (void)argv;
    
    char content_c;
    if (argc != 4) {
        std::cout << "Error: Format must be: ./replace [FILENAME] [s1] [s2]" << std::endl;
        return (1);
    }
    std::string og_filename(argv[1]);
    std::string out_filename(og_filename.append(".replace"));
    std::ifstream og_file(argv[1]);
    if (!og_file) {
        std::cout << "Error: FILENAME not valid." << std::endl;
        return (1);
    }
    std::ofstream replace_file(out_filename.c_str());
    if (!replace_file) {
        std::cout << "Error: Problem with creation of FILENAME.replace" << std::endl;
        return (1);
    }
    while (og_file >> std::noskipws >> content_c) {
        if (sed_match(og_file, argv[2])) {
            sed_replace(og_file, argv[2], argv[3]);
        }
    }
    return (0);
}
