/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 20:24:29 by oumondad          #+#    #+#             */
/*   Updated: 2025/03/15 00:56:51 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

Account::Account( int initial_deposit )
{
	_accountIndex = _nbAccounts;
	std::cout << "index:" << _accountIndex<<";amount:"<< initial_deposit<<";created" << std::endl;
	_amount = initial_deposit;
	_totalAmount += initial_deposit;
	_nbAccounts++;
}

int	Account::getNbAccounts( void )
{return (_nbAccounts);}

int	Account::getTotalAmount( void )
{return (_totalAmount);}

int	Account::getNbDeposits( void )
{return (_totalNbDeposits);}

int	Account::getNbWithdrawals( void )
{return (_totalNbDeposits);}

void	Account::makeDeposit( int deposit )
{
	if (deposit <= 0)
		return ;
	_amount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	_totalAmount += deposit;
	
}

bool	Account::makeWithdrawal( int withdrawal )
{
	if (withdrawal <= 0 && _amount < withdrawal)
		return ;
	_amount -= withdrawal;
	_nbWithdrawals++;
	_totalNbWithdrawals++;
	_totalAmount -= withdrawal;
}

int		Account::checkAmount( void ) const
{
	return (_amount);
}

void	Account::displayStatus( void ) const
{
	
}

void	Account::displayAccountsInfos( void )
{
	//accounts:8;total:20049;deposits:0;withdrawals:0
	
}