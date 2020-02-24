#include <iostream>
#include "Account_Util.h"

// Displays Account objects in a vector of Account objects
void display(const std::vector<Account> &accounts) {
    std::cout << "\n=========== Accounts ===========" << std::endl;
    for (const auto &acc: accounts) {
        std::cout << acc << std::endl;
    }
}

// Deposits supplied amount into each of a vector of Account objects
// make sure not to repeat the "const" from display, since you are modifying the accounts
void deposit(std::vector<Account> &accounts, double amount) {
    std::cout << "\n========= Depositing into Accounts =========" << std::endl;
    for (auto &acc: accounts) {
        if (acc.deposit(amount)) {
            std::cout << "Deposited " << amount << " to " << acc << std::endl;
        } else {
            std::cout << "Failed deposit of " << amount << " to " << acc << std::endl;
        }
    }
}

// make sure not to repeat the "const" from display, since you are modifying the accounts
void withdraw(std::vector<Account> &accounts, double amount) {
    std::cout << "\n========= Withdrawing from Accounts =========" << std::endl;
    for (auto &acc: accounts) {
        if (acc.withdraw(amount)) {
            std::cout << "Withdrew " << amount << " to " << acc << std::endl;
        } else {
            std::cout << "Failed withdrawal of " << amount << " from " << acc << std::endl;
        }
    }
}

// helper functions for savings accounts

void display (const std::vector<Savings_Account> &accounts) {
    std::cout << "\n=========== Savings Accounts ==============" << std::endl;
    for (const auto &acc: accounts) {
        std::cout << acc << std::endl;
    }
}

void deposit (std::vector<Savings_Account> &accounts, double amount) {
    std::cout << "\n=========== Depositing into Accounts =========" << std::endl;
    for (auto &acc: accounts) {
        if (acc.deposit(amount)) {
            std::cout << "Deposited " << amount << " into savings account " << acc << std::endl;
        }
        else {
            std::cout << "Failed to deposit " << amount << " into savings account " << acc << std::endl;
        }
    }
}

void withdraw (std::vector<Savings_Account> &accounts, double amount) {
    std::cout << "\n========== Withdrawing from Savings ============" << std::endl;
    for (auto &acc: accounts) {
        if (acc.withdraw(amount)) {
            std::cout << "Withdrew " << amount << " from " << acc << std::endl;
        } else {
            std::cout << "Failed to withdraw " << amount << " from " << acc << std::endl;
        }
    }
}

// helper functions for checking accounts

void display (const std::vector<Checking_Account> &accounts) {
    std::cout << "\n=========== Checking Accounts ==============" << std::endl;
    for (const auto &acc: accounts) {
        std::cout << acc << std::endl;
    }
}

void deposit (std::vector<Checking_Account> &accounts, double amount) {
    std::cout << "\n=========== Depositing into Accounts =========" << std::endl;
    for (auto &acc: accounts) {
        if (acc.deposit(amount)) {
            std::cout << "Deposited " << amount << " into savings account " << acc << std::endl;
        }
        else {
            std::cout << "Failed to deposit " << amount << " into savings account " << acc << std::endl;
        }
    }
}

void withdraw (std::vector<Checking_Account> &accounts, double amount) {
    std::cout << "\n========== Withdrawing from Checking ============" << std::endl;
    for (auto &acc: accounts) {
        if (acc.withdraw(amount)) {
            std::cout << "Withdrew " << amount << " from " << acc << std::endl;
        } else {
            std::cout << "Failed to withdraw " << amount << " from " << acc << std::endl;
        }
    }
}