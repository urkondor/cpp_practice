#include <iostream>
#include <string>

class Player {
    private:
        std::string name;
        int health;
        int xp;

    public:
        // Player();
        // Player(std::string name_val);
        // default parameters
        Player(std::string name_val = "None", int health_val = 0, int xp_val = 0);

};
// regular overloaded constructors
/*
Player::Player()
    :name{"None"}, health{0}, xp{0} {

    }

Player::Player(std::string name_val)
    :name{name_val}, health{0}, xp{0} {

    }

Player::Player(std::string name_val, int health_val, int xp_val)
    :name{name_val}, health{health_val}, xp{xp_val} {

    }
*/


Player::Player()
    // calls the 3-args constructor w/ these parameters
    : Player {"None", 0, 0} {
    std::cout << "no-args constructor" << std::endl;

    }

Player::Player(std::string name_val)
    // calls the 3-args constructor
    : Player {name_val, 0, 0}{
    std::cout << "One-arg constructor" << std::endl;
    }

Player::Player(std::string name_val, int health_val, int xp_val)
    : name{name_val}, health{health_val}, xp{xp_val} {
    std::cout << "3-args constructor" << std::endl;
    }

int main() {

    Player empty;
    Player frank {"Frank"};
    Player villain{"Villain", 100, 55};

    return 0;
}


