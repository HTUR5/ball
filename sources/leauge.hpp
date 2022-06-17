#pragma once
#include "team.hpp"
#include <time.h>
#include <iostream>
#include "schedule.hpp"
#include "game.hpp"
#include <vector>

#define LEAUGE_SIZE 20

class schedule;
class game;

class leauge {
    private:
        std::vector<team*> _teams;
        schedule* _sc;

    public:
        leauge();
        leauge(std::vector<team*> teams);
        std::vector<team*> get_teams();
        void start_game();


};