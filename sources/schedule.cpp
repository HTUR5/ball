#include "schedule.hpp"

schedule::schedule() {

}

void schedule::add_game(game* game) {
    this->_class.push_back(game);
}