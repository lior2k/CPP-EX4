#include "Assassin.hpp"
using namespace coup;
const int ASSASSIN_COUP_COST = 3;

Assassin::Assassin(Game g, const std::string &name) {
    this->myName = name;
    this->myRole = "Assassin";
    this->game = g;
}

void Assassin::coup(Player &p) {
    if (this->my_coins < ASSASSIN_COUP_COST) {
        throw ("Not enough money to perform coup");
    }
}