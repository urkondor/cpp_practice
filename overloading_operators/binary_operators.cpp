#include <iostream>
#include <cstring>
#include "Mystring.h"

int main() {
    std::cout << std::boolalpha << std::endl;

    Mystring larry{"Larry"};
    Mystring moe{"Moe"};

    Mystring stooge = larry;
    larry.display();            // Larry
    moe.display();              // Moe

    std::cout << (larry == moe) << std::endl;
    std::cout << (larry == stooge) << std::endl;

    larry.display();
    Mystring larry2 = -larry;       // make lowercase
    larry2.display();

    Mystring stooges = larry + "Moe";
    // Mystring stooges = "Larry" + moe;        // compiler error - string literals aren't class members

    Mystring two_stooges = moe + " " + "Larry";
    two_stooges.display();

    Mystring three_stooges = moe + " " + larry + " " + "Curly";
    three_stooges.display();

    return 0;
}