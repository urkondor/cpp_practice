#include <iostream>
#include <vector>
#include "Account.h"
#include "Savings.h"
#include "Checking.h"
#include "Account_Util.h"

int main() {

/*     std::cout << "\n=== Account ===============" << std::endl;
    Account acc {};
    acc.deposit(2000.0);
    acc.withdraw(500.0);

    std::cout << std::endl;

    Account *p_acc {nullptr};
    p_acc = new Account();
    p_acc->deposit(1000.0);
    p_acc->withdraw(500.0);
    delete p_acc;

    std::cout << "\n======== Savings Account ========" << std::endl;
    Savings_Account sav_acc{};
    sav_acc.deposit(2000.0);
    sav_acc.withdraw(500.0);
    
    std::cout << std::endl;

    Savings_Account *p_sav {nullptr};
    p_sav = new Savings_Account();
    p_sav->deposit(1000.0);
    p_sav->withdraw(500.0);
    delete p_sav;

    std::cout << "\n=======================" << std::endl;
    return 0;
} */

    // final section challenge
    std::cout.precision(2);
    std::cout << std::fixed;

    // Accounts
    std::vector<Account> accounts;
    accounts.push_back(Account {});
    accounts.push_back(Account {"Larry"});
    accounts.push_back(Account {"Moe", 2000});
    accounts.push_back(Account {"Curly", 5000});

    display(accounts);
    deposit(accounts, 1000);
    withdraw(accounts, 2000);

    // Savings

    std::vector<Savings_Account> sav_accts;
    sav_accts.push_back(Savings_Account {});
    sav_accts.push_back(Savings_Account {"Superman"});
    sav_accts.push_back(Savings_Account {"Batman", 2000});
    sav_accts.push_back(Savings_Account {"Wonder Woman", 5000, 5.0});

    display(sav_accts);
    deposit(sav_accts, 1000);
    withdraw(sav_accts, 2000);

    /* Given this, create a checking account class
        - has name, balance, costs fee of $1.50 per withdrawal transaction
        
        Create a trust account 
        - name, balance, & interest rate
        - works like savings account
        - any deposits of $5000 receive a $50 bonus
        - only allows 3 / year, each must be < 20% of acct balance
        - (don't need calendar time, just make the 4th one fail)

        Add helper functions
    */

    // Checking

    std::vector<Checking_Account> checking_accts;
    checking_accts.push_back(Checking_Account {});
    checking_accts.push_back(Checking_Account {"Dewey"});
    checking_accts.push_back(Checking_Account {"Reese", 2000});

    display(checking_accts);
    deposit(checking_accts, 1000);
    withdraw(checking_accts, 2000);

    return 0;
}

