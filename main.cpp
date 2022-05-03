#include <iostream>

#include "Duke.hpp"
using namespace coup;

using namespace std;

int main() {
    Duke d1;
    d1.income();
    cout << d1.getCoins() << endl;
}
