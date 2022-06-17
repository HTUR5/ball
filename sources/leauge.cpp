#include "leauge.hpp"
#include <iostream>

leauge::leauge() {
    srand((unsigned)time(NULL));            
    for(uint i = 1; i <= LEAUGE_SIZE; i++) {
        std::string name  =  std::string(i, '.');
        team *makeTeam = new team{name,(float)rand()/RAND_MAX};
        this->_teams.push_back(makeTeam);
    }

    this->start_game();
}

leauge::leauge(std::vector<team*> teams) {
    uint teams_size  = teams.size();
    for(uint i = 0; i < LEAUGE_SIZE; i++) {
        if(i < teams_size) {
            this->_teams.push_back(teams.at(i));
        } else {
            std::string name  =  std::string(i, '.');
            team *makeTeam = new team{name,(float)rand()/RAND_MAX};
            this->_teams.push_back(makeTeam);
        }
    }
}

std::vector<team*> leauge::get_teams() {
    return this->_teams;
}

void leauge::start_game() {
    for(uint i = 0; i < 38; i++) { 
        for(uint i = 0; i < this->get_teams().size()/2; i++) {
            if(this->_teams.at(i)->get_play_with().size() == 19) {
                this->_teams.at(i)->clear_play_with();
            }
            std::vector<int> i_play_with = this->_teams.at(i)->get_play_with();
            for(uint j = 0; j < this->get_teams().size(); j++) {
                if (std::count(i_play_with.begin(), i_play_with.end(), j)) {
                    //game* makeGame = new game{this->get_teams().at(i),this->get_teams().at(j)};
                    team* a = this->get_teams().at(i);
                    team* b = this->get_teams().at(j);
                    //this->_sc->add_game(new game(a,b));
                    break;    
                }
            }
        }
    }
}
