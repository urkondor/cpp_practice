// Section 14

#include <iostream>
#include <vector>
#include "Mystring.h"

int main() {

    Mystring a {"Hello"};       // just a constructor
    Mystring b;                 // no-args constructor; new object
    b = a;                      // copy assignment

    b = "This is a test";       // b.operator=("This is a test"); to pull this off, we need to first set a 
                                // temporary object, then destroy it so we can assign b to this new string
}