#include <string>
#include "Computer.h"

    Computer::Computer() {
        name = "Computer";
        move = 'R';
    };

    std::string Computer::getName() {
        name = "Computer";
        return "Computer";
    };
    char Computer::makeMove() {
        move = 'R';
        return 'R';
    };