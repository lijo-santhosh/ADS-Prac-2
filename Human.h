#include <string>
#include "Player.h"
#ifndef HUMAN_H
#define HUMAN_H


class Human: public Player {
    public:
    Human(std::string username);
    Human();
    std::string getName();
    char makeMove();
};

#endif
