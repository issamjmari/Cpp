#include <iostream>
#include "Account.hpp"
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void	print_time(void)
{
	time_t now = time(0);
	tm *ltm = localtime(&now);
	std::cout << "[" << 1900 + ltm->tm_year ;
	if (1 + ltm->tm_mon < 10)
		std::cout << "0" << 1 + ltm->tm_mon ;
	else
		std::cout << 1 + ltm->tm_mon ;
	if (ltm->tm_mday < 10)
		std::cout << "0" <<ltm->tm_mday;
	else
		std::cout << ltm->tm_mday;
	std::cout << "-";
	if (ltm->tm_hour < 10)
		std::cout << "0" <<ltm->tm_hour;
	else
		std::cout << ltm->tm_hour;
	if (ltm->tm_min < 10)
		std::cout << "0" <<ltm->tm_min;
	else
		std::cout << ltm->tm_min;
	if (ltm->tm_sec < 10)
		std::cout << "0" <<ltm->tm_sec;
	else
		std::cout << ltm->tm_sec;
	std::cout << "] ";
}
Account::Account(int initial_deposit) 
{
	print_time();
	this->_accountIndex = _nbAccounts;
	std::cout << "index:" << this->_accountIndex << ";" << "amount:" << initial_deposit << ";" << "created\n";
	_nbAccounts++;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_amount = initial_deposit;
	_totalAmount += initial_deposit;
}


void Account::displayAccountsInfos(void)
{
	print_time();
	std::cout << "accounts:" << _nbAccounts << ";" << "total:" << _totalAmount << ";" \
		"deposits:" << _totalNbDeposits << ";" << "withdrawals:" << _totalNbWithdrawals << std::endl;
	_nbAccounts = 0;
}

void Account::displayStatus(void) const
{
	print_time();
	std::cout << "index:" << _accountIndex << ";" << "amount:" << _amount << ";" \
		<< "deposits:" << _nbDeposits << ";" << "withdrawals:" << _nbWithdrawals << std::endl;
}
bool Account::makeWithdrawal(int withdrawal)
{
	print_time();
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
	print_time();
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
	print_time();
	std::cout << "index:" << _accountIndex << ";" << "amount:" << _amount << ";" << "closed\n";
}
