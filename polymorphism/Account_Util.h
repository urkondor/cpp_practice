#ifndef _ACCOUNT_UTIL_H_
#define _ACCOUNT_UTIL_H_

#include <vector>
#include "ChallengeAccount.h"

// hlper functions for challenge account class
void display(const std::vector<Account *> &accounts);
void deposit(const std::vector<Account *> &accounts, double amount);
void withdraw(const std::vector<Account *> &accounts, double amount);

#endif