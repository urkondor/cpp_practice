#ifndef _SAVINGS_H_
#define _SAVINGS_H_

#include "Account.h"

class Savings_Account: public Account {
    friend std::ostream &operator<<(std::ostream &os, const Savings_Account &account);

    private:
    static constexpr double def_balance = 0.0;
    static constexpr double def_interest = 0.0;
    static constexpr const char *def_name = "Unnamed Savings Account";

    protected:

    double int_rate;

    public:

    Savings_Account(std::string name=def_name, double balance=def_balance, double interest=def_interest);
    bool deposit(double amount);
    // inherits Account withdrawal method
};

#endif