/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncallie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 12:46:02 by ncallie           #+#    #+#             */
/*   Updated: 2022/03/23 15:39:49 by ncallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef EX01_CONTACT_H
#define EX01_CONTACT_H

#include <iostream>
#include <string>
#include <iomanip>

class Contact {
private:
    int index;
    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string phoneNumber;
    std::string darkestSecret;

public:
    Contact(void);
    ~Contact(void);

    void setFirstname();
    void showFirstname();

    void setLastName();
    void showLastName();

    void setNickName();
    void showNickName();

    void setPhoneNumber();

    void setDarkestSecret();
    bool isEmpty();

    int getIndex();

    void showAllInformation();



};


#endif //EX01_CONTACT_H
