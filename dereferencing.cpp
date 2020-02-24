#include <iostream>
#include <string>
#include <vector>

int main() {

/*    int score {100};
    int *score_ptr {&score};

    // "dereferencing" score_ptr
    std::cout << *score_ptr << std::endl;     // 100

    *score_ptr = 200;
    std::cout << *score_ptr << std::endl;      // 200
    std::cout << score << std::endl;           // 200


    double high_temp {100.7};
    double low_temp {37.4};
    double *temp_ptr {&high_temp};

    std::cout << *temp_ptr << std::endl;     // 100.7
    temp_ptr = &low_temp;
    std::cout << *temp_ptr << std::endl;     // 37.4
*/

    std::vector<std::string> stooges {"Larry", "Moe", "Curly"};
    std::vector<std::string> *vector_ptr {nullptr};

    vector_ptr = &stooges;

    std::cout << "First stooge: " << (*vector_ptr).at(0) << std::endl;  // for some reason, need to parenthesize the dereferencing

    std::cout << "Stooges: ";
    for (auto stooge: *vector_ptr) {
        std::cout << stooge << " ";
    }
    std::cout << std::endl;
    return 0;

}