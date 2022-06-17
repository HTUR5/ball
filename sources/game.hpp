#pragma once
#include "team.hpp"

class game {
    class team;
    private:
        team* _group_a;
        team* _group_b;
        int _score;

    public:
        game(team* a, team* b);
        game();



};