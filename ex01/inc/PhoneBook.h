/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncallie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 12:46:09 by ncallie           #+#    #+#             */
/*   Updated: 2022/03/23 15:27:27 by ncallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX01_PHONEBOOK_H
#define EX01_PHONEBOOK_H

#include <iostream>
#include <string>
#include "../inc/Contact.h"
#include <cstdlib>

class PhoneBook {
private:
    Contact contacts[8];
    void replaceContact(std::string command);
    void fillContact(int index);
    void showContact(std::string command);
public:
    PhoneBook(void);
    ~PhoneBook(void);
    void getInstruction(void);
    void addContact(void);
    void showContacts(void);
};

#endif //EX01_PHONEBOOK_H
