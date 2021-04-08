#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
using namespace std;

class Shape{
public:
    //Shape(); // 构造函数无法使用virtual关键字变成虚函数
    Shape();
    virtual ~Shape();
    virtual double calcArea();
    //virtual static void test(); // virtual关键字只能用于非静态的函数
};

#endif