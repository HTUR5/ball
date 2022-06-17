#include "leauge.hpp"
#include <iostream>

int main() {
    leauge lig;
    std::cout << lig.get_teams().size() << std::endl;

    for(uint i = 0; i < 20; i++) {
        std::cout << lig.get_teams().at(i)->get_name() << std::endl;
    }



    return 0;
}