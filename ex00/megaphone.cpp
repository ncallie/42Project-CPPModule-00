/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncallie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 12:45:45 by ncallie           #+#    #+#             */
/*   Updated: 2022/03/23 12:45:50 by ncallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int argc, char *argv[]) {
    if (argc == 1) {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 0;
    }
    for (int i = 1; i < argc; i++) {
        for (int j = 0; j < strlen(argv[i]); j++) {
            std::cout << (char)toupper(argv[i][j]);
        }
    }
    std::cout << std::endl;
    return 0;
}