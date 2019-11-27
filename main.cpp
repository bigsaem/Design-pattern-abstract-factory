#include <iostream>
#include "maze_game.hpp"
#include "maze_game.cpp"
int main() {
    enchanted_faery_factory eFactory;
    maze_game mazeGame;
    maze* newMaze = mazeGame.create_maze(eFactory);
    newMaze->print();
    delete(newMaze);
    return 0;
}