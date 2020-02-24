#include <iostream>
#include <string>
#include <vector>

void display( std::vector<std::string> *v) {
    for(auto str: *v) {
        std::cout << str << " ";
    }
    std::cout << std::endl;
}

int main() {

    std::cout << "-----------" << std::endl;
    std::vector<std::string> stooges {"Larry", "Moe", "Curly"};
    display(&stooges);

    std::cout << std::endl;
    return 0;
}