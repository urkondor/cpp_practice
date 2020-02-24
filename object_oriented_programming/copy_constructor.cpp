#include <string>
#include <iostream>

class Player {
    private:
        std::string name;
        int health;
        int xp;

    public:
        std::string get_name() {
            return name;
        }
        int get_health() {
            return health;
        }
        int get_xp() {
            return xp;
        }
        Player(std::string name_val="None", int health_val=0, int xp = 0);

        // copy constructor
        Player(const Player &source);
        
        // Desctructor
        ~Player() { std::cout << "Destructor called for : " << name << std::endl; }
};

Player::Player(std::string name_val, int health_val, int xp_val)
    : name{name_val}, health{health_val}, xp{xp_val} {
        std::cout << "three-arg costructor for "  << name << ". " << std::endl;
    }

Player::Player(const Player &source) 
    : name(source.name), health(source.health), xp(source.xp) {
        std::cout << "Copy constructor... made a copy of: " << source.name << std::endl;
    }

void display_player(Player p) {

    std::cout << "Name: " << p.get_name() << std::endl;
    std::cout << "Health: " << p.get_health() << std::endl;
    std::cout << "XP: " << p.get_xp() << std::endl;
}


int main() {
    Player empty {"XXXXXX", 100, 50};
    Player my_new_object {empty};

    display_player(empty);
    Player frank {"Frank"};
    Player hero {"Hero", 100};
    Player villain {"Villain", 100, 55};

    return 0;
}