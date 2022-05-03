#include "Player.hpp"
using namespace coup;
const int COUP_COST = 7;

void Player::income() {
    my_coins++;
}

void Player::foreign_aid() {
    my_coins += 2;
}

void Player::coup() {
    if (this->my_coins < COUP_COST) {
        throw "Not enough coins to perform coup";
    }
}

int Player::coins() {
    return this->my_coins;
}

std::string Player::role() {
    return this->myRole;
}

std::string Player::name() {
    return this->myName;
}

