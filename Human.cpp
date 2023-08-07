#include <string>
#include "Human.h"
#include <iostream>

    Human::Human(std::string username) {
        name = username;
    };

    Human::Human() {
        name = "Human";
    }

    char Human::makeMove() {
        char pMove;
        std::cout << "Enter move: ";
        std::cin >> pMove;
        move = pMove;
        return pMove;
    }

    std::string Human::getName() {
        return name;
    }