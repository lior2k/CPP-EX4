#include "doctest.h"
#include "Game.hpp"
#include "Assassin.hpp"
#include "Ambassador.hpp"
#include "Captain.hpp"
#include "Contessa.hpp"
#include "Duke.hpp"

using namespace coup;
using namespace std;

TEST_CASE("Good Input") {
    Game g{};
    Assassin assa{g, "Lior"};
    Duke duke{g, "Johnson"};
    Captain captain{g, "Hook"};
    Contessa contessa{g, "Consuella"};
    Ambassador ambassador{g, "Hanin Zuabi"};

    CHECK(g.players().size() == 5);
    CHECK(g.turn() == "Lior");
    assa.income();
    CHECK(g.turn() == "Johnson");
    duke.income();
    CHECK(g.turn() == "Hook");
    captain.income();
    CHECK(g.turn() == "Consuella");
    contessa.income();
    CHECK(g.turn() == "Hanin Zuabi");
    ambassador.income();
    CHECK(g.turn() == "Lior");

    CHECK(assa.coins() == 1);
    CHECK(duke.coins() == 1);
    CHECK(captain.coins() == 1);
    CHECK(contessa.coins() == 1);
    CHECK(ambassador.coins() == 1);

    assa.foreign_aid();
    duke.foreign_aid();
    captain.foreign_aid();
    contessa.foreign_aid();
    ambassador.foreign_aid();
    CHECK(assa.coins() == 3);
    CHECK(duke.coins() == 3);
    CHECK(captain.coins() == 3);
    CHECK(contessa.coins() == 3);
    CHECK(ambassador.coins() == 3);

    CHECK(assa.role() == "Assassin");
    CHECK(duke.role() == "Duke");
    CHECK(captain.role() == "Captain");
    CHECK(contessa.role() == "Contessa");
    CHECK(ambassador.role() == "Ambassador");

    assa.coup(ambassador);
    duke.tax();
    CHECK(duke.coins() == 6);
    captain.steal(duke);
    CHECK(captain.coins() == 5);
    CHECK(duke.coins() == 4);
    contessa.block(assa);
    CHECK(g.players().size() == 5);
    ambassador.transfer(captain, assa);
    CHECK(captain.coins() == 4);
    CHECK(assa.coins() == 1);
}