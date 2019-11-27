//
// Created by Sammy on 2019-11-26.
//

#ifndef LAB9_MAZE_GAME_HPP
#define LAB9_MAZE_GAME_HPP

#include "maze_factory.hpp"

class maze_game {
public:
    maze_game()=default;
    ~maze_game();
    maze* create_maze(maze_factory &factory);
};


#endif //LAB9_MAZE_GAME_HPP
