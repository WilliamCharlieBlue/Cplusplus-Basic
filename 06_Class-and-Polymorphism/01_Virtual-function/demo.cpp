#include <iostream>
#include "Circle.h"
#include "Rect.h"
using namespace std;

/*
动态多态、虚函数
    Shape类
        构造函数，析构函数，calcArea()
    Rect类
        m_dWidth, m_dHeight
        构造函数，析构函数，calcArea()
    Circle类
        m_dR
        构造函数，析构函数，calcArea()
 */

int main(void){
    Shape *shape1 = new Rect(3,6);
    Shape *shape2 = new Circle(5);

    shape1->calcArea();
    shape2->calcArea();

    delete shape1;
    delete shape2;
    shape1 = NULL;
    shape2 = NULL;
    return 0;
}