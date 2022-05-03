#include <string>
#include "Player.hpp"
#include "Game.hpp"

namespace coup {

    class Ambassador : public Player {
        private:
            Game game;
        public:
            Ambassador(Game g, const std::string &name);

            void transfer(Player &from, Player &to);
            void block(Player &p);
    };

}
