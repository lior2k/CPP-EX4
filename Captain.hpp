#include <string>
#include "Player.hpp"
#include "Game.hpp"

namespace coup {

    class Captain : public Player {
        private:
            Game game;
        public:
            Captain(Game g, const std::string &name);
            
            void steal(Player &p);
            void block(Player &p);
    };

}
