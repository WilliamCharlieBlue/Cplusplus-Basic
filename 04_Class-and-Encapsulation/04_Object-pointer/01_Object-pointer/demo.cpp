#include <iostream>
#include "Coordinate.h"
using namespace std;

/*
    定义Coordinate类
    数据成员：m_iX 和 m_iY
    声明对象指针，并通过指针操控对象

    计算两个点，横纵坐标的和
 */

int main(void){

    Coordinate *p1 = NULL;
    p1 = new Coordinate;
    Coordinate *p2 = new Coordinate();

    p1->m_iX = 10;    p1->m_iY = 20;
    (*p2).m_iX = 30;    (*p2).m_iY = 40;
    cout << p1->m_iX + (*p2).m_iX << endl;
    cout << p1->m_iY + (*p2).m_iY << endl;
    delete p1; p1 = NULL;
    delete p2; p2 = NULL;

    Coordinate p3;
    Coordinate *p4 = &p3;
    p4->m_iX = 60;
    p4->m_iY = 70;

    cout << p3.m_iX << endl;
    cout << p3.m_iY << endl;

    return 0;
}