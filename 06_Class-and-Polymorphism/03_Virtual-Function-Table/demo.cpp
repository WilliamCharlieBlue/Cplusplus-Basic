#include <iostream>
#include "Circle.h"
#include "Rect.h"
using namespace std;

/*
虚函数表
    Shape类
        构造函数，析构函数，calcArea()
    Rect类
        m_dWidth, m_dHeight
        构造函数，析构函数，calcArea()
    Circle类
        m_dR
        构造函数，析构函数，calcArea()
概念说明
    对象的大小 -> 类中数据成员所占内存的大小，不包括成员函数, m_iR为int类型，大小为4
    对象的地址 -> 类实例化后，对象会占有一定量的内存单元，占用的第一个内存单元的地址就是对象的地址
    对象成员的地址 -> 实例化后，每一个成员所占据的地址就是对象成员的地址，数据类型不同，所占据的内存大小也不同
    虚函数表指针 -> 在具有虚函数的情况下，实例化后对象的第一块内存，存放一个指针(大小是4)，指向虚函数表
 */

int main(void){
    Shape shape;
    cout << sizeof(shape) << endl;  // 如果没有虚函数或者虚析构函数，会打印出1；

    int *p = (int *)&shape;  // 强制类型转换，将Shape类型的地址转换为int类型的地址
    cout << p << endl;
    cout << (unsigned int)(*p) << endl;

    Circle circle(100);
    cout << sizeof(circle) << endl;

    int *q = (int *)&circle;
    cout << q << endl;
    cout << (unsigned int)(*q) << endl; // 对象的地址，而这个地址的第一块内存就指向了"Circle circle(100);"的100;
    cout << "q++;q++;" << endl;
    q++;q++;
    cout << (unsigned int)(*q) << endl;

    return 0;
}