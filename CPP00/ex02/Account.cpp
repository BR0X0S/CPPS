/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 20:24:29 by oumondad          #+#    #+#             */
/*   Updated: 2025/03/17 02:59:42 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

/*--------------------------------CONSTRACTER--------------------------------*/

Account::Account( int initial_deposit )
{
	_accountIndex = _nbAccounts;
	_amount = 0;
	_nbDeposits = 0;
	_nbWithdrawals = 0;

	std::cout << "index:" << _accountIndex<<";amount:"
			<< initial_deposit<<";created" << std::endl;
	_amount = initial_deposit;
	_totalAmount += initial_deposit;
	_nbAccounts++;
}


/*----------------------------------GETERS----------------------------------*/

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


/*----------------------------------SETERS----------------------------------*/

void	Account::makeDeposit( int deposit )
{
	if (deposit <= 0)
		return ;
	_amount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	_totalAmount += deposit;

	std::cout << "index:"<<_accountIndex<<";p_amount:"
		<<(_amount - deposit)<<";deposit:"<<deposit<<";amount:"
			<<_amount<<";nb_deposits:"<<_nbDeposits<<std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	if (_amount < withdrawal)
	{
		std::cout << "index:"<<_accountIndex
			<<";p_amount:"<<_amount<<";withdrawal:refused"<<std::endl;
		return (false);
	}
	_amount -= withdrawal;
	_nbWithdrawals++;
	_totalNbWithdrawals++;
	_totalAmount -= withdrawal;

	std::cout << "index:"<<_accountIndex<<";p_amount:"
		<<(_amount + withdrawal)<<";withdrawal:"<<withdrawal<<";amount:"
			<<_amount<<";nb_withdrawals:"<<_nbWithdrawals<<std::endl;
	return (true);
}

void	Account::displayAccountsInfos( void )
{
	std::cout << "accounts:"<<_nbAccounts
		<<";total:"<<_totalAmount<< ";deposits:"<<_totalNbDeposits
			<<";withdrawals:"<<_totalNbWithdrawals << std::endl;
}

void	Account::displayStatus( void ) const
{
	std::cout << "index:"<<_accountIndex
		<<";amount:"<<_amount<<";deposits:"
			<<_nbDeposits<<";withdrawals:"<<_nbWithdrawals<<std::endl;
}


/*--------------------------------DESTRACTER--------------------------------*/

Account::~Account()
{
	std::cout << "index:"
		<<_accountIndex<<";amount:"<<_amount<<";closed"<< std::endl;
}
/*--------------------------------------------------------------------------*/