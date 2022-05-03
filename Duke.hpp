#include <string>
#include "Player.hpp"
#include "Game.hpp"

namespace coup {

    class Duke : public Player {
        private:
            Game game;

        public:
            Duke(Game g, const std::string &name);

            void tax();
            void block(Player &p);
    };

}
