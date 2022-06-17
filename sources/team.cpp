#include "team.hpp"

team::team(std::string name, double talent) {
    this->_name = name;
    this-> _talent_level = talent;
}

std::string team::get_name() {
    return this->_name;
}

std::vector<int> team::get_play_with() {
    return this->_play_with;
}

void team::add_play_with(int game) {
    this->_play_with.push_back(game);
}

void team::clear_play_with() {
    this->_play_with.clear();
}

