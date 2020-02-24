#ifndef _CHECKING_H_
#define _CHECKING_H_

#include <iostream>
#include <string>
#include "Account.h"

class Checking_Account: public Account {
    friend std::ostream &operator<<(std::ostream &os, const Checking_Account &account);   

    private:
    static constexpr double def_balance = 0.0;
    static constexpr const char *def_name = "Unnamed Checking Account";

    public:

    Checking_Account(std::string name=def_name, double balance=def_balance);
    // inherits Account deposit method;
    bool withdraw(double amount);

};

#endif