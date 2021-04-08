#ifndef COORDINATE_H
#define COORDINATE_H

#include <iostream>
using namespace std;

class Coordinate{
    // - 友元函数重载
    friend Coordinate &operator-(Coordinate &c);
    // + 友元函数重载
    friend Coordinate operator+(Coordinate c1, Coordinate c2);
    // << 输出运算符重载
    friend ostream &operator<<(ostream &outpu, Coordinate &coor);
public:
    Coordinate(int x, int y);
//    // 成员函数重载
//    Coordinate &operator-();
    // 前置++
    Coordinate &operator++();
    // 后置++ 不再返回引用，而且需要用int来作为标识
    Coordinate operator++(int);
    // 二元 + 成员函数重载
    //Coordinate operator+(Coordinate &c);
    // 二元 [] 成员函数重载
    int operator[](int index);


    int getX();
    int getY();

private:
    int m_iX;
    int m_iY;
};

#endif