#include <string>
#include "Player.hpp"
#include "Game.hpp"

namespace coup {

    class Contessa : public Player {
        private:
            Game game;
        public:
            Contessa(Game g, const std::string &name);

            void block(Player &p);
    };

}
