#include <iostream>
#include "Dustman.h"
using namespace std;

/*
纯虚数和抽象类
    Person类
        m_strName
        构造函数，析构函数，纯虚函数work
    Worker类
        m_iAge
        构造函数，析构函数，work
    Dustman类
        构造函数，work
 */

int main(void){
    Dustman dustman("Charlie",20);
    dustman.work();
    return 0;
}