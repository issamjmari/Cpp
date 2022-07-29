#include <iostream>
#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) 
{

	this->_accountIndex = this->_nbAccounts;
	std::cout << "index:" << this->_accountIndex << ";" << "amount:" << initial_deposit << ";" << "created\n";
	this->_nbAccounts++;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_amount = initial_deposit;
	this->_totalAmount += initial_deposit;
}


void Account::displayAccountsInfos(void)
{

	std::cout << "accounts:" << _nbAccounts << ";" << "total:" << _totalAmount << ";" \
		"deposits:" << _totalNbDeposits << ";" << "withdrawals:" << _totalNbWithdrawals << std::endl;
	_nbAccounts = 0;
}

void Account::displayStatus(void) const
{

	std::cout << "index:" << _accountIndex << ";" << "amount:" << _amount << ";" \
		<< "deposits:" << _nbDeposits << ";" << "withdrawals:" << _nbWithdrawals << std::endl;
}
bool Account::makeWithdrawal(int withdrawal)
{
	_nbAccounts++;
	if (_amount < 50)
	{
		std::cout << "index:" << _accountIndex << ";" << "p_amount:" << _amount << ";" "withdrawal:refused\n";
		_nbWithdrawals = 0;
		return 0;
	}
	else
	{
		std::cout << "index:" << _accountIndex << ";" << "p_amount:" << _amount << ";" \
			"withdrawal:" << withdrawal << ";" << "amount:" << _amount - withdrawal << ";" << "nb_withdrawals:1\n";
		_nbWithdrawals = 1;
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		_totalNbWithdrawals++;
		return 1;
	}
	return 0;
}
void Account::makeDeposit(int deposit)
{

	std::cout << "index:" << _accountIndex << ";" << "p_amount:" << _amount << ";" \
	<< "deposit:" << deposit << ";" << "amount:" << _amount + deposit << ";" \
	"nb_deposits:" << "1\n";
	_amount += deposit;
	_totalAmount += deposit;
	_nbDeposits = 1;
	_totalNbDeposits++;
	_nbAccounts++;
}
Account::~Account(void)
{

	std::cout << "index:" << _accountIndex << ";" << "amount:" << _amount << ";" << "closed\n";
}
