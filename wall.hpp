//
// Created by Sammy on 2019-11-26.
//

#ifndef LAB9_WALL_HPP
#define LAB9_WALL_HPP
class wall{
public:
    virtual void print()=0;
    virtual ~wall(){
        std::cout<<"wall destructed"<<std::endl;
    };
};
class enchanted_wall:public wall{
public:
    void print(){
        std::cout<<"enchanted_wall"<<std::endl;
    }
    ~enchanted_wall(){
        std::cout<<"enchanted wall destructed"<<std::endl;
    };
};
class distopian_wall:public wall{
public:
    void print(){
        std::cout<<"distopian_wall"<<std::endl;
    }
    ~distopian_wall(){
        std::cout<<"distopian wall destructed"<<std::endl;
    };
};
#endif //LAB9_WALL_HPP
