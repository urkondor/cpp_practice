#include <iostream>
#include <string>
#include "ChallengeAccount.h"
#include "ChallengeChecking.h"
#include "ChallengeSaving.h"
#include "ChallengeTrust.h"

// #include "Account_Util.h"

int main() {
    /*
    // Account joe;  // abstract class -- can't instantiate
    Checking_Account c;
    std::cout << c << std::endl;

    Savings_Account s {"Frank", 5000, 2.6};
    std::cout << s << std::endl;

    // base class ptr -- static binding: outputs Account: Leo: 10000
    Account *ptr = new Trust_Account("Leo", 10000, 2.6);
    std::cout << *ptr << std::endl;

    This works great, but we can add an interface to streamline some of the code.
    So far, we've created an abstract base class for dynamically binding the variables. 
    In the example above, using the pointer, the binding is still static, so that needs to be fixed.


    */

    Account *ptr = new Trust_Account("Leo", 10000, 2.6);
    std::cout << *ptr << std::endl;

    
};