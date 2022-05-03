#include "Contessa.hpp"
using namespace coup;

Contessa::Contessa(Game g, const std::string &name) {
    this->myName = name;
    this->myRole = "Contessa";
    this->game = g;
}

void Contessa::block(Player &p) {

}