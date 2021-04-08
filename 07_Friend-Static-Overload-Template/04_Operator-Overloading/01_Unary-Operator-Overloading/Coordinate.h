#ifndef COORDINATE_H
#define COORDINATE_H

#include <iostream>
using namespace std;

class Coordinate{
    // 友元函数重载
    friend Coordinate &operator-(Coordinate &c);
public:
    Coordinate(int x, int y);
//    // 成员函数重载
//    Coordinate &operator-();
    // 前置++
    Coordinate &operator++();
    // 后置++ 不再返回引用，而且需要用int来作为标识
    Coordinate operator++(int);

    int getX();
    int getY();

private:
    int m_iX;
    int m_iY;
};

#endif