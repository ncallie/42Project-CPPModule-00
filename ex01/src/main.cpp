/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncallie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 12:46:29 by ncallie           #+#    #+#             */
/*   Updated: 2022/03/23 12:46:48 by ncallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PhoneBook.h"
#include "../inc/Contact.h"



int main (void) {
    PhoneBook phoneBook;
    std::string command;
    phoneBook.getInstruction();
    while(std::getline(std::cin, command)) {
        if (std::cin.eof()) {
            return 0;
        }
        if (command == "EXIT") {
            std::cout << "\033[1;31mDeleted all contacts ... exit!\033[0m\n";
            exit(0);
        }
        if (command == "ADD") {
            phoneBook.addContact();
        }
        if (command == "SEARCH") {
            phoneBook.showContacts();
        }
        phoneBook.getInstruction();
    }
    return 0;
}
