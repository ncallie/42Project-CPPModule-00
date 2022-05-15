/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncallie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 12:46:20 by ncallie           #+#    #+#             */
/*   Updated: 2022/03/23 12:46:24 by ncallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Contact.h"

Contact::Contact() {
    static int index = 1;
    this->index = index;
    index++;
}

Contact::~Contact() {
}

void Contact::setFirstname() {
    firstName.clear();
    std::cout << "\033[1;32mEnter your first name:\033[0m\n";
    std::getline(std::cin, firstName);
    if (std::cin.eof()) {
        std::cerr << "\033[1;31mPressed Ctrl-D..exit\033[0m\n";
        exit(0);
    }
    if (firstName.empty())
        setFirstname();
}

void Contact::showFirstname() {
    if (firstName.length() > 10){
        std::cout  << firstName.substr(0, 9) << ".";
    }
    else
        std::cout << std::setw(10) << firstName;
}

void Contact::setLastName() {
    lastName.clear();
    std::cout << "\033[1;32mEnter your last name:\033[0m\n";
    std::getline(std::cin, lastName);
    if (std::cin.eof()) {
        std::cerr << "\033[1;31mPressed Ctrl-D..exit\033[0m\n";
        exit(0);
    }
    if (lastName.empty())
        setLastName();
}

void Contact::showLastName() {
    if (lastName.length() > 10){
        std::cout  << lastName.substr(0, 9) << ".";
    }
    else
        std::cout << std::setw(10) << lastName;
}

void Contact::setNickName() {
    nickName.clear();
    std::cout << "\033[1;32mEnter your nickname:\033[0m\n";
    std::getline(std::cin, nickName);
    if (std::cin.eof()) {
        std::cerr << "\033[1;31mPressed Ctrl-D..exit\033[0m\n";
        exit(0);
    }
    if (nickName.empty())
        setNickName();
}

void Contact::showNickName() {
    if (nickName.length() > 10){
        std::cout  << nickName.substr(0, 9) << ".";
    }
    else
        std::cout << std::setw(10) << nickName;
}

void Contact::setPhoneNumber() {
    phoneNumber.clear();
    std::cout << "\033[1;32mEnter your phone number:\033[0m\n";
    std::getline(std::cin, phoneNumber);
    if (std::cin.eof()) {
        std::cerr << "\033[1;31mPressed Ctrl-D..exit\033[0m\n";
        exit(0);
    }
    if (phoneNumber.empty())
        setPhoneNumber();
}

void Contact::setDarkestSecret() {
    darkestSecret.clear();
    std::cout << "\033[1;32mEnter your darkest secret:\033[0m\n";
    std::getline(std::cin, darkestSecret);
    if (std::cin.eof()) {
        std::cerr << "\033[1;31mPressed Ctrl-D..exit\033[0m\n";
        exit(0);
    }
    if (darkestSecret.empty())
        setDarkestSecret();
}

bool Contact::isEmpty() {
    return this->darkestSecret.empty();
}

int Contact::getIndex() {
    return this->index;
}

void Contact::showAllInformation() {
    std::cout << "Name: " << firstName << " " << lastName << " (" << nickName << ")" << std::endl;
    std::cout << "PhoneNumber: " << phoneNumber << std::endl;
    std::cout << "Darkest Secret: " << darkestSecret << std::endl;
}
