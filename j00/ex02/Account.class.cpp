// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Account.class.cpp                                  :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <mcanal@student.42.fr>              +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/15 12:55:11 by mcanal            #+#    #+#             //
//   Updated: 2015/06/17 00:26:32 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Account.class.hpp"
#include <iostream> //cout
#include <ctime> //time

/*
** init
*/
int			Account::_nbAccounts = 0;
int			Account::_totalAmount = 0;
int			Account::_totalNbDeposits = 0;
int			Account::_totalNbWithdrawals = 0;

/*
** constructor
*/
Account::Account(void) :
	_accountIndex(getNbAccounts()),
	_amount(0),
	_nbDeposits(0),
	_nbWithdrawals(0)
{
	_nbAccounts++;

	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex \
              << ";amount:" << this->_amount	 \
              << ";created" << std::endl;
}

Account::Account(int initial_deposit) :
	_accountIndex(getNbAccounts()),
    _amount(initial_deposit),
	_nbDeposits(0),
	_nbWithdrawals(0)
{
	this->_accountIndex = _nbAccounts;
	_nbAccounts++;
    _totalAmount += initial_deposit;
    
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex \
              << ";amount:" << this->_amount	 \
              << ";created" << std::endl;
}

/*
** destructor
*/
Account::~Account(void)
{
	_nbAccounts--;

	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex \
              << ";amount:" << this->_amount	 \
              << ";closed" << std::endl;
}

/*
** getter/setter
*/
int			Account::getNbAccounts(void) { return _nbAccounts; }
int			Account::getTotalAmount(void) { return _totalAmount; }
int			Account::getNbDeposits(void) { return _totalNbDeposits; }
int			Account::getNbWithdrawals(void) { return _totalNbWithdrawals; }

/*
** private
*/
void		Account::_displayTimestamp(void)
{
	time_t      theTime = time(NULL);
    char        s[32];

    strftime(s, sizeof(s), "[%Y%d%m_%H%M%S] ", localtime(&theTime));
    std::cout << s;
}

/*
** public
*/
void		Account::makeDeposit(int deposit)
{
	Account::_displayTimestamp();

	this->_nbDeposits++;
    _totalNbDeposits++;
	this->_amount += deposit;
    _totalAmount += deposit;
    
    std::cout << "index:" << this->_accountIndex
              << ";p_amount:" << this->_amount - deposit
              << ";deposit:" << deposit
              << ";amount:" << this->_amount
              << ";nb_deposits:" << this->_nbDeposits
              << std::endl;
}

bool		Account::makeWithdrawal(int withdrawal)
{
	Account::_displayTimestamp();

	if (withdrawal > this->_amount)
    {
        std::cout << "index:" << this->_accountIndex
                  << ";p_amount:" << this->_amount
                  << ";withdrawal:refused" << std::endl;
		return false;
    }

	this->_nbWithdrawals++;
    _totalNbWithdrawals++;
	this->_amount -= withdrawal;
    _totalAmount -= withdrawal;

    std::cout << "index:" << this->_accountIndex
              << ";p_amount:" << this->_amount + withdrawal
              << ";withdrawal:" << withdrawal
              << ";amount:" << this->_amount
              << ";nb_withdrawals:" << this->_nbWithdrawals
              << std::endl;

	return true;
}

int			Account::checkAmount(void)		const
{
	return _amount;
}

void		Account::displayStatus(void)	 const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
				<< ";amount:" << this->_amount
				<< ";deposits:" << this->_nbDeposits
				<< ";withdrawals:" << this->_nbWithdrawals
				<< std::endl;
}

void		Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts
				<< ";total:" << _totalAmount
				<< ";deposits:" << _totalNbDeposits
				<< ";withdrawals:" << _totalNbWithdrawals
				<< std::endl;
}
