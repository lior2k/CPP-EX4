#include "Captain.hpp"
using namespace coup;

Captain::Captain(Game g, const std::string &name) {
    this->myName = name;
    this->myRole = "Captain";
    this->game = g;
}

void Captain::steal(Player &p) {

}

void Captain::block(Player &p) {

}