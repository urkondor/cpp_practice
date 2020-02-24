#ifndef _CHECKING_H_
#define _CHECKING_H_

#include "Savings.h"

class Trust_Account: public Savings_Account {
    friend std::ostream &operator<<(std::ostream &os, const Trust_Account &account);

    private:

    static constexpr const char *def_name = "Unnamed Trust Account";
    static constexpr double def_balance = 0.0;
    static constexpr double def_interest = 0.0;

    protected:

    double int_rate;
    int num_withdrawals;

    public:

    Trust_Account(std::string name=def_name, double balance=def_balance, 
                    double interest=def_interest);
    bool deposit(double amount, double interest);
    bool withdraw(double amount);
};

#endif