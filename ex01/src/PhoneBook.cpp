/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncallie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 12:46:35 by ncallie           #+#    #+#             */
/*   Updated: 2022/03/23 12:46:38 by ncallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PhoneBook.h"

PhoneBook::PhoneBook() {
}

PhoneBook::~PhoneBook() {
}

void PhoneBook::getInstruction() {
    std::cout << "\033[1;34mEnter your command [ADD, SEARCH, EXIT]:\033[0m\n";
}

void PhoneBook::fillContact(int index) {
    contacts[index].setFirstname();
    contacts[index].setLastName();
    contacts[index].setNickName();
    contacts[index].setPhoneNumber();
    contacts[index].setDarkestSecret();
}

void PhoneBook::replaceContact(std::string command) {
    int index = 0;
    if (command.length() == 1) {
        if (command[0] > '0' && command[0] < '9') {
            index = command[0] - '0';
            fillContact(index - 1);
            return ;
        }
    }
    else {
        std::cout << "\033[1;31mBad index..return menu\033[0m\n";
        return;
    }
}

void PhoneBook::addContact() {
    static int index = 0;
    std::string command;
    if (index == 8) {
        std::cout << "The list is full, enter the \033[1;31m[index]\033[0m of the updated contact or \033[1;31mMENU\033[0m:" << std::endl;
        while (std::getline(std::cin, command)) {
            if (std::cin.eof()) {
                std::cerr << "\033[1;31mPressed Ctrl-D..exit\033[0m\n";
                exit(0);
            }
            if (command == "MENU") {
                return;
            } else {
                replaceContact(command);
                break;
            }
        }
    }
    else {
        fillContact(index);
        index++;
    }
}

void PhoneBook::showContact(std::string command) {
    int index;
    if (command.length() == 1) {
        if (command[0] > '0' && command[0] < '9') {
            index = (command[0] - '0') - 1;
            contacts[index].showAllInformation();
            return ;
        }
    }
}

void PhoneBook::showContacts() {
    std::string command;

    std::cout << "|----------|----------|----------|----------|" << std::endl;
    std::cout << "|     index|First name| Last name|  Nickname|" << std::endl;
    std::cout << "|----------|----------|----------|----------|" << std::endl;
    if (contacts[0].isEmpty()) {
        std::cout << "|                   \033[1;31mEMPTY\033[0m                   |" << std::endl;
        std::cout << "|----------|----------|----------|----------|" << std::endl;
        return;
    }
    for (int i = 0; i < 8; i++) {
        if (contacts[i].isEmpty())
            break;
        std::cout << "|" <<"         " << contacts[i].getIndex() << "|";
        contacts[i].showFirstname();
        std::cout << "|";
        contacts[i].showLastName();
        std::cout << "|";
        contacts[i].showNickName();
        std::cout << "|" << std::endl;
        std::cout << "|----------|----------|----------|----------|" << std::endl;
    }
    std::cout << "Enter the \033[1;31m[index]\033[0m to get detailed information about the contact or \033[1;31mMENU\033[0m:" << std::endl;
    while (std::getline(std::cin, command)) {
        if (std::cin.eof()) {
            std::cerr << "\033[1;31mPressed Ctrl-D..exit\033[0m\n";
            exit(0);
        }
        if (command == "MENU") {
            return;
        } else {
            showContact(command);
            break;
        }
    }
}




