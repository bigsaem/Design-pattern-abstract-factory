//
// Created by Sammy on 2019-11-26.
//

#ifndef LAB9_MAZE_HPP
#define LAB9_MAZE_HPP

#include "room.hpp"
#include "door.hpp"
#include "vector"
using namespace std;
class maze{
protected:
    std::vector<room*> roomVec;
    std::vector<wall*> wallVec;
    std::vector<door*> doorVec;
public:
    void add_room(room* room){
        roomVec.push_back(room);
    }
    void add_wall(wall* wall){
        wallVec.push_back(wall);
    }
    void add_door(door* door){
        doorVec.push_back(door);
    }
    vector<room*> getRoom(){return roomVec;};
    virtual void print()=0;
    virtual ~maze(){
        for (std::vector<room*>::iterator ptr = roomVec.begin(); ptr < roomVec.end(); ptr++){
            delete(*ptr);
        }
        for (std::vector<wall*>::iterator ptr = wallVec.begin(); ptr < wallVec.end(); ptr++){
            delete(*ptr);
        }
        for (std::vector<door*>::iterator ptr = doorVec.begin(); ptr < doorVec.end(); ptr++){
            delete(*ptr);
        }
        cout<<"maze destructed"<<endl;
    }
};


class enchanted_maze: public maze{
public:
    enchanted_maze() = default;
    void print(){
        cout<<"enchanted_maze"<<endl;
        for (std::vector<room*>::iterator ptr = roomVec.begin(); ptr < roomVec.end(); ptr++){
            (*ptr)->print();
        }
        for (std::vector<wall*>::iterator ptr = wallVec.begin(); ptr < wallVec.end(); ptr++){
            (*ptr)->print();
        }
        for (std::vector<door*>::iterator ptr = doorVec.begin(); ptr < doorVec.end(); ptr++){
            (*ptr)->print();
        }
    }
    ~enchanted_maze(){
        for (std::vector<room*>::iterator ptr = roomVec.begin(); ptr < roomVec.end(); ptr++){
            delete(*ptr);
        }
        for (std::vector<wall*>::iterator ptr = wallVec.begin(); ptr < wallVec.end(); ptr++){
            delete(*ptr);
        }
        for (std::vector<door*>::iterator ptr = doorVec.begin(); ptr < doorVec.end(); ptr++){
            delete(*ptr);
        }
        cout<<"enchanted maze destructed"<<endl;
    }
};
class distopian_maze: public maze{
public:
    distopian_maze() = default;

    void print(){
        cout<<"distopian_maze"<<endl;
        for (std::vector<room*>::iterator ptr = roomVec.begin(); ptr < roomVec.end(); ptr++){
            (*ptr)->print();
        }
        for (std::vector<wall*>::iterator ptr = wallVec.begin(); ptr < wallVec.end(); ptr++){
            (*ptr)->print();
        }
        for (std::vector<door*>::iterator ptr = doorVec.begin(); ptr < doorVec.end(); ptr++){
            (*ptr)->print();
        }
    }
    ~distopian_maze(){
        for (std::vector<room*>::iterator ptr = roomVec.begin(); ptr < roomVec.end(); ptr++){
            delete(*ptr);
        }
        for (std::vector<wall*>::iterator ptr = wallVec.begin(); ptr < wallVec.end(); ptr++){
            delete(*ptr);
        }
        for (std::vector<door*>::iterator ptr = doorVec.begin(); ptr < doorVec.end(); ptr++){
            delete(*ptr);
        }
        cout<<"distopian maze destructed"<<endl;
    }
};
#endif //LAB9_MAZE_HPP
