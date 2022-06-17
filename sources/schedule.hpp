#pragma once
#include "leauge.hpp"
#include "game.hpp"
#include <vector>
 
class schedule {
    private:
        std::vector<game*> _class;

    public:
        schedule();
        void add_game(game* game);


};