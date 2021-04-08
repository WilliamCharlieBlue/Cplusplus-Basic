#include <iostream>
//#include "Soldier.h"
#include "Infantry.h"
using namespace std;

/*
Person类
    m_strName
    构造函数，析构函数，play()
Soldier类
    m_iAge
    构造函数，析构函数，work()
Infantry类
    构造函数，析构函数，attack()
定义函数
    test1(Person p)
    test2(Person &p)
    test3(person *p)
 */

void test1(Person p){
    p.play();
}

void test2(Person &p){
    p.play();
}

void test3(Person *p){
    p->play();
}

int main(void){
    Infantry infantry;
    cout << "test1()" << endl;
    test1(infantry);
    cout << "test2()" << endl;
    test2(infantry);
    cout << "test3()" << endl;
    test3(&infantry);
    cout << "test end" << endl;
    return 0;
}