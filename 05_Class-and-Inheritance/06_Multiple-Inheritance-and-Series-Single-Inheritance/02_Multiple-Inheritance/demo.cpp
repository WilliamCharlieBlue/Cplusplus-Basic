#include <iostream>
#include "MigrantWorker.h"


/*
多继承
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

    MigrantWorker *p = new MigrantWorker("Julia", "520");
    p->sow();
    p->carry();
    delete p;
    p = NULL;

    return 0;
}