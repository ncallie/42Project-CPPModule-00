/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncallie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 12:47:25 by ncallie           #+#    #+#             */
/*   Updated: 2022/03/23 15:43:52 by ncallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) {
    _nbWithdrawals = 0;
    _nbDeposits = 0;
    _accountIndex = _nbAccounts;
    _amount = initial_deposit;
    _totalAmount += _amount;
    _nbAccounts++;

    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << checkAmount() << ";";
    std::cout << "created";
    std::cout << "\n";
}

Account::Account(void) {}

Account::~Account(void) {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << checkAmount() << ";";
    std::cout << "closed";
    std::cout << "\n";
}

int Account::getNbAccounts(void) {
    return _nbAccounts;
}

int Account::getTotalAmount(void) {
    return _totalAmount;
}

int Account::getNbDeposits(void) {
    return _totalNbDeposits;
}

int Account::getNbWithdrawals(void) {
    return _totalNbWithdrawals;
}


void Account::displayAccountsInfos(void) {
    _displayTimestamp();
    std::cout << "accounts:" << getNbAccounts() << ";";
    std::cout << "total:" << getTotalAmount() << ";";
    std::cout << "deposits:" << getNbDeposits() << ";";
    std::cout << "withdrawals:" << getNbWithdrawals();
    std::cout << "\n";
}

void Account::makeDeposit(int deposit) {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "p_amount:" << checkAmount() << ";";
    std::cout << "deposits:" <<  deposit << ";";
    _amount += deposit;
    _totalAmount += deposit;
    std::cout << "amount:" << checkAmount() << ";";
    _nbDeposits++;
    _totalNbDeposits++;
    std::cout << "nb_deposits:" <<  _nbDeposits << ";";
    std::cout << "\n";
}

bool Account::makeWithdrawal(int withdrawal) {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "p_amount:" << checkAmount() << ";";
    std::cout << "withdrawal:";
    if (checkAmount() < withdrawal) {
        std::cout << "refused";
        std::cout << "\n";
        return false;
    } else {
        std::cout << withdrawal << ";";
        _amount -= withdrawal;
        std::cout << "amount:" << checkAmount() << ";";
        _nbWithdrawals++;
        _totalNbWithdrawals++;
        std::cout << "nb_withdrawals:" << _nbWithdrawals << ";";
        std::cout << "\n";
        return true;
    }

}

int Account::checkAmount(void) const {
    return this->_amount;
}

void Account::displayStatus(void) const {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << checkAmount() << ";";
    std::cout << "deposits:" <<  _nbDeposits << ";";
    std::cout << "withdrawals:" <<  _nbWithdrawals << ";";
    std::cout << "\n";
}

void Account::_displayTimestamp(void) {
    std::time_t t = std::time(0);
    std::tm* now = std::localtime(&t);
    std::cout << "[" <<(now->tm_year + 1900);
    std::cout << std::setfill('0') << std::setw(2) << now->tm_mon + 1;
    std::cout << std::setfill('0') << std::setw(2) << now->tm_mday;
    std::cout << "_";
    std::cout << std::setfill('0') << std::setw(2) << now->tm_hour;
    std::cout << std::setfill('0') << std::setw(2) << now->tm_min;
    std::cout << std::setfill('0') << std::setw(2) << now->tm_sec;
    std::cout << "] ";
}



