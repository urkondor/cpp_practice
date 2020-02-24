#include <iostream>
#include <string>

class Player {
    private:
        std::string name;
        int health;
        int xp;
    public:
        void set_name(std::string name_val) {
            name = name_val;
        }
        // constructors
        Player() {
            std::cout << "No args constructor called" << std::endl;
        }
        Player(std::string name) {
            std::cout << "String arg constructor called" << std::endl;
        }
        Player(std::string name, int health, int xp) {
            std::cout << "Three args constructor called" << std::endl;
        }
        // destructor
        ~Player() {
            std::cout << "Destructor!!!!  " << name << std::endl;
        }
};