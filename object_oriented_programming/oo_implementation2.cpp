#include <iostream>
#include <vector>
#include <string>
#include "accounts.h"

// have to declare this method w/ prototype in class declaration
void Account::set_name(std::string n) {
    name = n;
}

std::string Account::get_name() {
    return name;
}

bool Account::deposit(double amount) {
    balance += amount;
    return true;
}

bool Account::withdraw(double amount) {
    if(balance - amount >= 0) {
        balance -= amount;
        return true;
    } else{
        return false;
    }
}

int main() {
    Account frank_account;
    frank_account.set_name("Frank's account");
    frank_account.set_balance(1000.0);

    if (frank_account.deposit(200.0)) {
        std::cout << "Deposit OK" << std::endl;
    } else {
        std::cout << "Deposit not allowed" << std::endl;
    }

    if (frank_account.withdraw(500.0)) {
        std::cout << "Withdrawal OK" << std::endl;
    } else {
        std::cout << "Insufficient funds" << std::endl;
    }

    if (frank_account.withdraw(1500.0)) {
        std::cout << "Withdrawal OK" << std::endl;
    } else {
        std::cout << "Insufficient funds" << std::endl;
    }

    return 0;

}