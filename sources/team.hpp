#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "game.hpp"


class team {

    private:
        std::string _name;
        double _talent_level;
        std::vector<int> _play_with;

    public:
        team(std::string name, double talent);
        std::string get_name();
        std::vector<int> get_play_with();
        void add_play_with(int game);
        void clear_play_with();


};