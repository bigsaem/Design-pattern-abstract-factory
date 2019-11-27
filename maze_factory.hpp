//
// Created by Sammy on 2019-11-26.
//

#ifndef LAB9_MAZE_FACTORY_HPP
#define LAB9_MAZE_FACTORY_HPP

#include "maze.hpp"
#include "room.hpp"
#include "wall.hpp"
#include "door.hpp"

class maze_factory {
public:
    virtual maze* make_maze() =0;

    virtual wall* make_wall() =0;

    virtual room* make_room() =0;

    virtual door* make_door(room* room1, room* room2) =0;
};


class enchanted_faery_factory:public maze_factory{
public:
    maze* make_maze(){
        return new enchanted_maze;
    }
    wall* make_wall(){
        return new enchanted_wall;
    }

    room* make_room(){
        return new enchanted_room;
    }

    door* make_door(room* room1, room* room2){
        return new enchanted_door(room1, room2);
    }

};
class futuristic_dystopian_factory:public maze_factory{
    maze* make_maze(){
        return new distopian_maze;
    }
    wall* make_wall(){
        return new distopian_wall;
    }

    room* make_room(){
        return new distopian_room;
    }

    door* make_door(room*room1, room* room2){
        return new distopian_door(room1, room2);
    }
};
#endif //LAB9_MAZE_FACTORY_HPP