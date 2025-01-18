#include "Account.hpp"
#include <iostream>
#include <ctime>


/* -------------------------------------------------------------------------- */
/*                                 Constructors                               */
/* -------------------------------------------------------------------- :( -- */

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit ) : _amount(initial_deposit) {
    _nbAccounts++;
    _totalAmount += initial_deposit;
    _accountIndex = _nbAccounts - 1;
    _nbDeposits = 0;
    _nbWithdrawals = 0;

    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

Account::~Account( void ) {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

/* -------------------------------------------------------------------------- */
/*                              Setters & Getters                             */
/* -------------------------------------------------------------------------- */

int Account::getNbAccounts( void ) { return _nbAccounts; }
int Account::getTotalAmount( void ) { return _totalAmount; }
int Account::getNbDeposits( void ) { return _totalNbDeposits; }
int Account::getNbWithdrawals( void ) { return _totalNbWithdrawals; }


void Account::displayStatus( void ) const
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void Account::displayAccountsInfos( void ) 
{
    _displayTimestamp();
    std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}


/* -------------------------------------------------------------------------- */
/*                             Members functions                              */
/* -------------------------------------------------------------------------- */

int Account::checkAmount( void ) const 
{ 
    return _amount; 
}

void Account::makeDeposit( int deposit ) 
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";deposit:" << deposit;
    _amount += deposit;
    _totalAmount += deposit;
    _nbDeposits++;
    _totalNbDeposits++;
    std::cout << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool Account::makeWithdrawal( int withdrawal ) 
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:";
    if (withdrawal > _amount) {
        std::cout << "refused" << std::endl;
        return false;
    }
    _amount -= withdrawal;
    _totalAmount -= withdrawal;
    _nbWithdrawals++;
    _totalNbWithdrawals++;
    std::cout << withdrawal << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
    return true;
}

void	Account::_displayTimestamp(void) 
{
	time_t		now;
	char		buf[32];

	now = time(NULL);
	strftime(buf, sizeof(buf), "[%Y%m%d_%H%M%S] ", localtime(&now));
	std::cout << buf;
}