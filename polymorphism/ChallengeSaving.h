#ifndef _SAVINGS_ACCOUNT_H_
#define _SAVINGS_ACCOUNT_H_

#include <iostream>
#include <string>
#include "ChallengeAccount.h"

class Savings_Account: public Account {
    friend std::ostream &operator<<(std::ostream &os, const Savings_Account &account);

    private:
    static constexpr const char *def_name = "Unnamed Savings Account";
    static constexpr double def_balance = 0.0;
    static constexpr double def_int_rate = 0.0;

    protected:
    double int_rate;

    public:
    Savings_Account(std::string name=def_name, double balance=def_balance, 
                        double int_rate=def_int_rate);
    virtual bool withdraw(double) override;
    // Inherits the Account::deposit method
    virtual bool deposit(double) override;
    virtual void print(std::ostream &os) const override;

    virtual ~Savings_Account() = default;
};

#endif