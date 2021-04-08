#include <iostream>
#include <stdlib.h>
#include "Line.h"
using namespace std;
/*对象成员
    坐标类：Coordinate
    数据成员：m_iX 和 m_iY
    成员函数：构造函数、析构函数、数据封装函数
    线段类：Line
    数据成员：点A m_coorA, 点B m_coorB
    成员函数：构造函数、析构函数、数据封装函数、信息打印函数
 * */

int main(void){

    Line *p = new Line(1,2,3,4);
    p->printInfo();
    delete p;
    p = NULL;
    return 0;
}