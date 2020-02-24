#include <iostream>
#include <string>

class Player {

    private:
        std::string name;
        int health;
        int xp;
    
    public:
        std::string get_name() const {
            return name;
        }
        void set_name(std::string name_val) {
            name = name_val;
        }

        // Overloading constructor prototypes
        Player();
        Player(std::string name_val);
        Player(std::string name_val, int health_val, int xp_val);
};

Player::Player()
    : Player {"None", 0, 0} {

    }

Player::Player(std::string name_val)
    : Player {name_val, 0, 0} {

    }

Player::Player(std::string name_val, int health_val, int xp_val) 
    : Player {name_val, health_val, xp_val} {

    }

void display_player_name(const Player &p) {
    std::cout << p.get_name() << std::endl;
}

int main() {

    const Player villain {"Villain", 100, 55};
    Player hero {"Hero", 100, 15};

    // without defining the method as const, this will throw an error on villain
    display_player_name(villain);

    return 0;
}