#include "Ambassador.hpp"
using namespace coup;

Ambassador::Ambassador(Game g, const std::string &name) {
    this->myName = name;
    this->myRole = "Ambassador";
    this->game = g;
}

void Ambassador::transfer(Player &from, Player &to) {
    
}

void Ambassador::block(Player &p) {

}