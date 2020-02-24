#include <iostream>
#include "Trust.h"

Trust_Account::Trust_Account(std::string name, double balance, double interest)
    :Savings_Account (name, balance, interest) {
}

bool Trust_Account::deposit(double amount, double interest) {

    if (amount >= 5000) {
        amount += 50;
    }
    amount += amount * (interest / 100);
    return Savings_Account::deposit(amount);
}

bool Trust_Account::withdraw(double amount) {
    double pct;
    
    pct = (amount / balance) * 100;
    if (pct >= 20) {
        std::cout << "Withdrawals from this account must be under 20% of total balance." << std::endl;
        return false;
    } else {
        if (num_withdrawals > 3) {
            std::cout << "You have already made the maximum number of withdrawals this year" << std::endl;
            return false;
        } else {
            // uses savings withdraw method
            return Account::withdraw(amount);
        }

    }

}