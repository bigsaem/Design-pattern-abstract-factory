//
// Created by Sammy on 2019-11-26.
//

#ifndef LAB9_DOOR_HPP
#define LAB9_DOOR_HPP
class door{
public:
    virtual void print() = 0;
};
class enchanted_door:public door{
private:
    room* room1;
    room* room2;
public:
    enchanted_door() = default;
    enchanted_door(room* room1, room* room2):room1(room1), room2(room2){};
    void print(){
        std::cout<<"enchanted door"<<std::endl;
    }
};
class distopian_door:public door{
private:
    room* room1;
    room* room2;
public:
    distopian_door() = default;
    distopian_door(room* room1, room* room2):room1(room1), room2(room2){};
    void print(){
        std::cout<<"distopian door"<<std::endl;
    }
};
#endif //LAB9_DOOR_HPP
