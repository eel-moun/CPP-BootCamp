/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-moun <eel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 15:37:08 by eel-moun          #+#    #+#             */
/*   Updated: 2023/02/04 15:37:09 by eel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts(void){
    return _nbAccounts;
}

int Account::getTotalAmount(void){
    return (_totalAmount);
}

int Account::getNbDeposits(void){
    return _totalNbDeposits;
}

int Account::getNbWithdrawals(void){
    return _totalNbWithdrawals;
}


void Account::makeDeposit(int deposit){
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";"
		<< "p_amount:" << _amount << ";";
    _amount += deposit;
	_totalAmount += deposit;
    _nbDeposits++;
	_totalNbDeposits++;
	std::cout << "deposit:" << deposit << ";"
		<< "amount:" << _amount << ";"
		<< "nb_deposits:" << _nbDeposits
		<< std::endl;
}

bool Account::makeWithdrawal(int withdrawal){
    if(withdrawal <= _amount)
    {
		_displayTimestamp();
		std::cout << "index:" << _accountIndex << ";"
			<< "p_amount:" << _amount << ";";
        _amount -= withdrawal;
		_totalAmount -= withdrawal;
        _nbWithdrawals++;
		_totalNbWithdrawals++;
		std::cout << "withdrawal:" << withdrawal << ";"
			<< "amount:" << _amount << ";"
			<< "nb_withdrawals:" << _nbWithdrawals
			<< std::endl;
        return(true);
    }
	else{
		_displayTimestamp();
		std::cout << "index:" << _accountIndex << ";"
			<< "p_amount:" << _amount << ";"
			<< "withdrawal:refused" << std::endl;
    	return(false);
	}
}

int Account::checkAmount(void) const{
    return _amount;
}

void Account::_displayTimestamp(void){
    time_t curr_time;
	tm * curr_tm;
	char time_str[100];

	time(&curr_time);
	curr_tm = localtime(&curr_time);
	strftime(time_str,50,"%Y%m%d_%H%M%S",curr_tm);
	std::cout << "[" << time_str<< "] ";
}

void Account::displayAccountsInfos(void){
    _displayTimestamp();
    std::cout << "accounts:" << _nbAccounts << ";"
			<< "total:" << _totalAmount << ";"
			<< "deposits:" << _totalNbDeposits << ";"
			<<"withdrawals:" << _totalNbWithdrawals << std::endl; 
}

void Account::displayStatus(void) const{
	_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";"
			<< "amount:" << _amount << ";"
			<< "deposits:" <<_nbDeposits << ";"
			<< "withdrawals:" << _nbWithdrawals
			<< std::endl;
}

Account::Account(int initial_deposit){
    _amount = initial_deposit;
	_accountIndex = _nbAccounts;
	_nbAccounts++;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";"
		<< "amount:" << _amount << ";" << "created" << std::endl;
}

Account::~Account()
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";"
		<< "amount:" << _amount << ";" << "closed" << std::endl;
}