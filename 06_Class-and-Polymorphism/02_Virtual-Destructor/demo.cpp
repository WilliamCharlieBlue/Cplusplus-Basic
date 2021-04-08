#include <iostream>
#include "Circle.h"
#include "Rect.h"
using namespace std;

/*
虚析构函数
    Shape类
        构造函数，析构函数，calcArea()
    Rect类
        m_dWidth, m_dHeight
        构造函数，析构函数，calcArea()
    Circle类
        m_dR，m_pCenter
        构造函数，析构函数，calcArea()
    Coordinate类
        m_iX, m_iY
        构造函数，析构函数
 */

//virtual void test(){} // 普通函数无法使用virtual关键字变成虚函数

int main(void){
    Shape *shape1 = new Rect(3,6);
    Shape *shape2 = new Circle(3,5,5);

    shape1->calcArea();
    shape2->calcArea();

    delete shape1;
    delete shape2;
    shape1 = NULL;
    shape2 = NULL;
    return 0;
}