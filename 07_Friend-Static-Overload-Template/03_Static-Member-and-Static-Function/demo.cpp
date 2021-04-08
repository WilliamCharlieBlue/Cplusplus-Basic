#include "Tank.h"
#include <iostream>
using namespace std;

/*
静态数据成员和静态成员函数
    Tank类
        m_sCode, m_iCount,
        构造函数，析构函数，fire(), getCount()
 */

int main(void){

    cout << Tank::getCount() << endl;
    Tank t1("A");
    cout << t1.getCount() << endl;

    Tank *p = new Tank("B");
    cout << p->getCount() << endl;
    Tank *q = new Tank("C");
    cout << q->getCount() << endl;
    delete p;
    cout << Tank::getCount() << endl;
    delete q;
    cout << Tank::getCount() << endl;
    p = NULL; q = NULL;

    t1.fire();

    return 0;
}