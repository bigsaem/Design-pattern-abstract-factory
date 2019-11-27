//
// Created by Sammy on 2019-11-26.
//

#ifndef LAB9_ROOM_HPP
#define LAB9_ROOM_HPP

#include "wall.hpp"
class room{
public:
    virtual void print()=0;
    virtual ~room(){
        std::cout<<"room destructed"<<std::endl;
    };
};

class enchanted_room:public room{
public:
    void print(){
        std::cout<<"enchanted_room"<<std::endl;
    }
    ~enchanted_room(){
        std::cout<<"enchanted room destructed"<<std::endl;
    };
};
class distopian_room:public room{
public:
    void print(){
        std::cout<<"distopian_room"<<std::endl;
    }
    ~distopian_room(){
        std::cout<<"distopian room destructed"<<std::endl;
    };
};
#endif //LAB9_ROOM_HPP
