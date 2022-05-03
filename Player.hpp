#include "string"

namespace coup {

    class Player {
        protected:
            int my_coins = 0;
            std::string myRole;
            std::string myName;

        public:
            void income();
            void foreign_aid();
            void coup();

            int coins();
            std::string role();
            std::string name();
    };

}
