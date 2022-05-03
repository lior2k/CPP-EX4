#include <string>
#include "Player.hpp"
#include "Game.hpp"

namespace coup {

    class Assassin : public Player {
        private:
            Game game;
        public:
            Assassin(Game g, const std::string &name);

            void coup(Player &p);
    };

}
