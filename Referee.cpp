#include "Referee.h"

Player * Referee::refGame(Player * player1, Player * player2){
    char humanMove = player1->makeMove();
    char computerMove = player2->makeMove();

    if (humanMove == computerMove) {
        return nullptr;
    } else if (humanMove == 'S') {
        return player2;
    } else {
        return player1;
    }
};