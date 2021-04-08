#include <iostream>
#include "MigrantWorker.h"

/*
虚继承
    Person类
        m_strColor
        构造函数，析构函数，printColor()
    Farmer类
        m_strName
        构造函数，析构函数，sow()
    Worker类
        m_strCode
        构造函数，析构函数，carry()
    MigrantWorker类
        构造函数，析构函数
 */

int main(void){

    MigrantWorker *p = new MigrantWorker("Julia", "520", "pink");
    p->Farmer::printColor(); // "Farmer pink" when not using virtual public in Worker.h
    p->Worker::printColor(); // "Worker pink" when not using virtual public in Worker.h
    p->sow();
    p->carry();
    delete p;
    p = NULL;

    return 0;
}