#include <iostream>
#include "Account_Util.h"

void display(std::vector<Account *> &accounts) {
    std::cout << "\n=== Accounts =====" << std::endl;
    for (const auto &acc: accounts) {
        std::cout << acc << std::endl;
    }
}

void deposit(std::vector<Account *> &accounts, double amount) {

    std::cout << "\n === Depositing to Accounts === " << std::endl;
    for (auto acc:accounts) {
        // if (acc.deposit(amount)) {
        if (acc->deposit(amount)) {
            std::cout << "Deposited " << amount << " to " << acc << std::endl;
        }
        else {
            std::cout << "Failed Deposit of " << amount << " to " << acc << std::endl;
        }
    }
}

void withdraw(std::vector<Account *> &accounts, double amount) {

    std::cout << "\n === Withdrawing from Accounts === " << std::endl;
    for (auto acc:accounts) {
        // if (acc.withdraw(amount)) {  // pointer reference does not use ., but ->
        if (acc->withdraw(amount)) {
            std::cout << "Withdrew " << amount << " to " << *acc << std::endl;
        }
        else {
            std::cout << "Failed to withdraw " << amount << " from " << *acc << std::endl;
        }
    }
}
