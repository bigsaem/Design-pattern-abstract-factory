//
// Created by Sammy on 2019-11-26.
//

#include "maze_game.hpp"

maze* maze_game::create_maze(maze_factory &factory) {
    maze* mazeptr = factory.make_maze();
    mazeptr->add_room(factory.make_room());
    mazeptr->add_room(factory.make_room());
    mazeptr->add_door(factory.make_door(mazeptr->getRoom().at(0), mazeptr->getRoom().at(1)));
    for(int i =0; i<8;i++) {
        mazeptr->add_wall(factory.make_wall());
    }
    return mazeptr;
}