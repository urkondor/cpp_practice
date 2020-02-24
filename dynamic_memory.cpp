#include <iostream>

int main() {

    size_t size{0};
    double *temp_ptr {nullptr};

    std::cout << "How many temps?";
    std::cin >> size;

    temp_ptr = new double[size];
    std::cout << temp_ptr << std::endl;

    delete [] temp_ptr;

    return 0;
}