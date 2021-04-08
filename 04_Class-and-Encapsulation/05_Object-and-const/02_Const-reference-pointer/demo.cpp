#include <iostream>
#include "Coordinate.h"
using namespace std;

/* 常对象成员、常函数、常对象
要求定义两个类：
    坐标类： Coordinate
        数据成员： m_iX, m_iY
        成员函数： 构造函数，析构函数，数据封装函数
    线段类： Line
        数据成员： m_pCoorA, m_pCoorB
        成员函数： 构造函数，析构函数，数据封装函数、信息打印函数
 */

int main(void){

    Coordinate coor1(3,5);
//    Coordinate &coor2 = coor1;
//    Coordinate *pCoor = &coor1;
//    coor1.printInfo();
//    coor2.printInfo();
//    pCoor->printInfo();

    const Coordinate &coor2 = coor1;
    const Coordinate *pCoor = &coor1;
    coor1.printInfo();
    coor2.printInfo();
    pCoor->printInfo();

    //coor2.getX(); // Error because getX() is not a const function
    //pCoor->getY(); // Error because getY() is not a const function

    return 0;
}