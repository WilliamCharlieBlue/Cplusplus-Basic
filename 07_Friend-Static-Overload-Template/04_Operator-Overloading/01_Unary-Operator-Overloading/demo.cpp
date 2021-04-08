#include "Coordinate.h"
#include <iostream>
using  namespace std;

/*
运算符重载-- 一元运算符重载
    Coordinate类
        m_iX, m_iY
        构造函数，getX, getY
    负号运算符重载（成员函数，友元函数）
    ++ 运算符重载（前置++， 后置++）
 */

int main(void){
    Coordinate coor1(1, 3);
    cout << coor1.getX() << "," << coor1.getY() << endl;
    -coor1; // coor1.operator-();
    cout << coor1.getX() << "," << coor1.getY() << endl;
    ++coor1;
    cout << coor1.getX() << "," << coor1.getY() << endl;

    // 后置++为先返回后加1，所以X返回的是加一前的，而Y返回的是第一次加一后、第二次加一前
    cout << (coor1++).getX() << ",";
    cout << (coor1++).getY() << endl;
    // 两次后置++都执行完了，所以X,Y相比于++之前都加了2
    cout << coor1.getX() << "," << coor1.getY() << endl;

    return 0;
}

