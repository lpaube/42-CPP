/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <laube@student.42quebec.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 19:21:07 by laube             #+#    #+#             */
/*   Updated: 2021/10/23 01:06:34 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int sed_match(std::ifstream& og_file, char* s1) {
    std::streampos curr_pos = og_file.tellg();
    char content_c;
    while (og_file.good()) {
        og_file >> std::noskipws >> content_c;
        if (*s1 != content_c) break;
        s1++;
        if (!*s1) return 1;
    }
    og_file.seekg(curr_pos);
    return 0;
}

int main(int argc, char **argv) {
    
    char content_c;
    if (argc != 4) {
        std::cout << "Error: Format must be: ./replace [FILENAME] [s1] [s2]" << std::endl;
        return 1;
    }

    std::ifstream og_file(argv[1]);
    if (!og_file) {
        std::cout << "Error: FILENAME not valid." << std::endl;
        return 1;
    }

    std::string og_filename(argv[1]);
    std::string out_filename(og_filename.append(".replace"));

    std::ofstream replace_file(out_filename.c_str());
    if (!replace_file) {
        std::cout << "Error: Problem with creation of FILENAME.replace" << std::endl;
        return 1;
    }
    while (og_file.good()) {
        if (sed_match(og_file, argv[2])) {
            replace_file << std::string(argv[3]);
        }
        else {
            og_file >> std::noskipws >> content_c;
            if (og_file.good()) replace_file << content_c;
        }
    }
    return 0;
}
