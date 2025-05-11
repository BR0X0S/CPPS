/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 20:24:29 by oumondad          #+#    #+#             */
/*   Updated: 2025/05/08 21:53:00 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

/*--------------------------------CONSTRUCTOR--------------------------------*/

Account::Account( int initial_deposit )
{
	_accountIndex = _nbAccounts;
	_amount = 0;
	_nbDeposits = 0;
	_nbWithdrawals = 0;

	_displayTimestamp();
	std::cout << "index:" << _accountIndex<<";amount:"
			<< initial_deposit<<";created" << std::endl;
	_amount = initial_deposit;
	_totalAmount += initial_deposit;
	_nbAccounts++;
}


/*----------------------------------GETTERS----------------------------------*/

int	Account::getNbAccounts( void )
{return (_nbAccounts);}

int	Account::getTotalAmount( void )
{return (_totalAmount);}

int	Account::getNbDeposits( void )
{return (_totalNbDeposits);}

int	Account::getNbWithdrawals( void )
{return (_totalNbWithdrawals);}

int		Account::checkAmount( void ) const 
{return (_amount);}

/*----------------------------------SETTERS----------------------------------*/

void	Account::makeDeposit( int deposit )
{
	_displayTimestamp();
	if (deposit <= 0)
		return ;
	_nbDeposits++;
	_totalNbDeposits++;
	_amount += deposit;
	_totalAmount += deposit;

	std::cout << "index:"<<_accountIndex<<";p_amount:"
		<<(_amount - deposit)<<";deposit:"<<deposit<<";amount:"
			<<_amount<<";nb_deposits:"<<_nbDeposits<<std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	if (_amount < withdrawal)
	{
		std::cout << "index:"<<_accountIndex
			<<";p_amount:"<<_amount<<";withdrawal:refused"<<std::endl;
		return (false);
	}
	_nbWithdrawals++;
	_totalNbWithdrawals++;
	_amount -= withdrawal;
	_totalAmount -= withdrawal;

	std::cout << "index:"<<_accountIndex<<";p_amount:"
		<<(_amount + withdrawal)<<";withdrawal:"<<withdrawal<<";amount:"
			<<_amount<<";nb_withdrawals:"<<_nbWithdrawals<<std::endl;
	return (true);
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:"<<_nbAccounts
		<<";total:"<<_totalAmount<< ";deposits:"<<_totalNbDeposits
			<<";withdrawals:"<<_totalNbWithdrawals << std::endl;
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:"<<_accountIndex
		<<";amount:"<<_amount<<";deposits:"
			<<_nbDeposits<<";withdrawals:"<<_nbWithdrawals<<std::endl;
}

/*-----------------------------------TIME-----------------------------------*/

void	Account::_displayTimestamp(void)
{
	time_t	date;
	time(&date);
	tm		*now;

	now = localtime(&date);
	std::cout << "["<<now->tm_year+ 1900;
	if (now->tm_mon + 1 < 10)
		std::cout << "0";
	std::cout << now->tm_mon + 1;
	if (now->tm_mday < 10)
		std::cout << "0";
	std::cout << now->tm_mday<<"_";
	if (now->tm_hour < 10)
		std::cout << "0";
	std::cout << now->tm_hour;
	if (now->tm_min < 10)
		std::cout << "0";
	std::cout << now->tm_min;
	if (now->tm_sec < 10)
		std::cout << "0";
	std::cout << now->tm_sec<<"] ";
}

/*--------------------------------DESTRUCTOR--------------------------------*/

Account::~Account()
{
	_displayTimestamp();
	std::cout << "index:"
		<<_accountIndex<<";amount:"<<_amount<<";closed"<< std::endl;
}
/*--------------------------------------------------------------------------*/