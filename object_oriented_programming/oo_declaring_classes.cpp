#include <iostream>
#include <string>
#include <vector>


class Player {
    public:
        // attributes & methods
        std::string name;
        int health;
        int xp;

        void talk(std::string words) {
            std::cout << name << " says: " << words << std::endl;
        };

        bool is_dead(int health) {
            if(health > 0) {
                return false;
            }
            else return true;
        };
};


int main() {
    // create player instance
    Player frank;
    frank.name = "Frank";
    frank.health = 100;
    frank.xp = 12;

    Player hero;
    hero.name = "Benjamin";
    hero.health = 82;
    hero.xp = 1024;

    // create pointer to object
    Player *enemy {nullptr};
    enemy = new Player;
    enemy->name = "Derek";
    enemy->health = 150;
    enemy->xp = 200;

    // Player players[] {frank, hero};
    std::vector<Player> player_vec {frank};
    // add player to vector
    player_vec.push_back(hero);
    std::cout << "There are " << player_vec.size() << " players" << std::endl;

    frank.talk("Hello!");
    // enemy is a pointer, so need the -> operator
    enemy->talk("Arrghghargh!");
    // or...
    // (*enemy).talk("Aarrghgargh!");
    // don't forget!
    delete enemy;
    return 0;
}