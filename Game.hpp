#include <string>
#include <vector>
#include "Player.hpp"
#pragma once

namespace coup {

    class Game {
        private:
            std::vector<Player> myPlayers;
            std::string myWinner;
        public:
            Game();

            std::vector<std::string> players();
            std::string turn();
            std::string winner();

            void addPlayer(Player &p);
    };

}
