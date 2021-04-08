#include <iostream>
#include "Line.h"
using namespace std;

/* 对象成员指针
要求定义两个类：
    坐标类： Coordinate
        数据成员： m_iX, m_iY
        成员函数： 构造函数，析构函数，数据封装函数
    线段类： Line
        数据成员： m_pCoorA, m_pCoorB
        成员函数： 构造函数，析构函数，数据封装函数
 */

int main(void){

    Line *p = new Line(1,2,3,4);
    p->printInfo();

    delete p;
    p = NULL;
    cout << "sizeof(p): " << sizeof(p) << endl;
    cout << "sizeof(Line): " << sizeof(Line) << endl;

    return 0;
}