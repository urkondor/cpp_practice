#include <vector>
#include <iostream>

// prototypes
void displayMenu();
char getSelection();

void handleDisplay(const std::vector<int> &v);
void handleAdd(std::vector<int> &v);
void handleMean(const std::vector<int> &v);
void handleSmall(const std::vector<int> &v);
void handleLarge(const std::vector<int> &v);
void handleFind(const std::vector<int> &v);
void handleQuit();
void handleUnknown();

void displayList(const std::vector<int> &v);
double calculateMean(const std::vector<int> &v);
bool find(const std::vector<int> &v, int target);

int main() {

    std::vector<int> numbers; {}// just a list of numbers
    char selection {};

    do {
        displayMenu();
        selection = getSelection();
        switch (selection) {
            case 'P':
                handleDisplay(numbers);
                break;
            case 'A':
                handleAdd(numbers);
                break;
            case 'M':
                handleMean(numbers);
                break;
            case 'S':
                handleSmall(numbers);
                break;
            case 'L':
                handleLarge(numbers);
                break;
            case 'F':
                handleFind(numbers);
                break;
            case 'Q':
                handleQuit();
                break;
            default:
                handleUnknown();
        }
    } while (selection !='Q');
    std::cout << std::endl;
    return 0;
}

void displayMenu() {
    std::cout << "\nP - Print numbers" << std::endl;
    std::cout << "A - Add a number" << std::endl;
    std::cout << "M - Display Mean of the Numbers" << std::endl;
    std::cout << "S - Display the smallest number" << std::endl;
    std::cout << "L - Display the largest number" << std::endl;
    std::cout << "F - find a number" << std::endl;
    std::cout << "Q - quit" << std::endl;
    std::cout << "\nEnter your choice" << std::endl;
}  

char getSelection() {

    char selection {};
    std::cin >> selection;
    return toupper(selection);    
}

void handleDisplay(const std::vector<int> &v) {
    if (v.size() == 0) {
        std::cout << "[] - the list is empty" << std::endl;
    } else {
        displayList(v);
    }
}

void handleFind(const std::vector<int> &v) {

    int target {};
    std::cout << "enter the number to find: ";
    std::cin >> target;
    if (find(v, target)) {
        std::cout << "Target was found.";
    } else {
        std::cout << "Target not found" ;

    }
}

void handleAdd(std::vector<int> &v) {

    int num_to_add {};
    std::cout << "Add an integer to the list" ;
    std::cin >> num_to_add;
    v.push_back(num_to_add);
    std::cout << num_to_add << " added!" << std::endl;

}

void handleMean(const std::vector<int> &v) {

    // handle unexpected first
    if (v.size() == 0) {
        std::cout << "Unable to calculate mean - list is empty" << std::endl;
    } else {
        std::cout << "The mean is " << calculateMean(v) << std::endl;
    }

}

void handleSmall(const std::vector<int> &v) {
    if (v.size() == 0) {
        std::cout << "The list is empty." << std::endl;
    } 

    int smallest {999999};
    for(int i{0}; i < v.size(); i++) {
        if (v.at(i) < smallest) {
            smallest = v.at(i);
        }
    }
    std::cout << "The smallest element in the vector is " << smallest << std::endl;
}

void handleLarge(const std::vector<int> &v) {
    if (v.size() == 0) {
        std::cout << "The list is empty." << std::endl;
    } 

    int largest {-999999};
    for(int i{0}; i < v.size(); i++) {
        if (v.at(i) > largest) {
            largest = v.at(i);
        }
    }
    std::cout << "The smallest element in the vector is " << largest << std::endl;
}


bool find(const std::vector<int> &v, int target) {

    for (auto num: v) {
        if (num == target) {
            return true;
        }
    }
    return false;

}

void handleQuit() {
    std::cout << "Goodbye" << std::endl;

}

void handleUnknown() {
    std::cout << "Unrecognized selection -- try again" << std::endl;
}



void displayList(const std::vector<int> &v) {
    std::cout << "[ ";
    for (auto num: v) {
        std::cout << num << " ";
    }
    std::cout << "] " << std::endl;
}

double calculateMean(const std::vector<int> &v) { 
    int total {};
    for (auto num: v) { 
        total += num;
    }
    return static_cast<double>(total)/v.size();

}