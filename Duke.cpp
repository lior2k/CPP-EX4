#include "Duke.hpp"
using namespace coup;

Duke::Duke(Game g, const std::string &name) {
    this->myName = name;
    this->myRole = "Duke";
    this->game = g;
}

void Duke::tax() {
    this->my_coins++;
}

void Duke::block(Player &p) {
    
}