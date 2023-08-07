#include <string>

#ifndef PLAYER_H
#define PLAYER_H

class Player {
    protected:
    std::string name; 
    char move; 

    public:
    virtual std::string getName() = 0;
    virtual char makeMove() = 0;
};

#endif