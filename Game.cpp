#include "Game.hpp"
using namespace coup;

Game::Game() {
    
}

std::vector<std::string> Game::players() {
    std::vector<std::string> names;
    for (unsigned int i = 0; i < this->myPlayers.size(); i++) {
        names.push_back(myPlayers[i].name());
    }
    return names;
}

std::string Game::turn() {
    return "";
}
            
std::string Game::winner() {
    return this->myWinner;
}

void Game::addPlayer(Player &p) {
    this->myPlayers.push_back(p);
}
