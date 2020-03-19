#ifndef _CHALLENGE_ACCOUNT_H_
#define _CHALLENGE_ACCOUNT_H_
#include <iostream>
#include <string>

// once interface is implemented, add its header file
#include "I_Printable.h"

// subclass to I_Printable, & override the interface's virtual function
class Account: public I_Printable {

    private:
    static constexpr const char *def_name = "Unnamed Account";
    static constexpr double def_balance = 0.0;

    protected:
    std::string name;
    double balance;

    public:
    Account(std::string name=def_name, double balance=def_balance);
    virtual bool deposit(double amount) = 0;
    virtual bool withdraw(double amount) = 0;
    virtual void print(std::ostream &os) const override;  // don't forget to implement for this class!
    virtual ~Account() = default;

};

#endif