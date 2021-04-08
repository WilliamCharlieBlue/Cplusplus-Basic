#include <iostream>
//#include "Infantry.h"
#include "Soldier.h"
using namespace std;

/*
公有继承： Is a
Person类
    m_strName
    构造函数，析构函数，play()
Soldier类
    m_iAge
    构造函数，析构函数，work()
定义函数
    test1(Person p)
    test2(Person &p)
    test3(Person *p)
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

//    Soldier soldier;
//    //Person p; p = soldier; p.play(); // 用soldier赋值给Person p
//    //Person p = soldier; p.play(); // 用soldier去初始化Person p
//    Person *p = &soldier; p->play(); // 用Person *p指向soldier对象 三种用法的结果是一致的。
//    // p->work(); // work() is not a member of Person

    Person *p = new Soldier;
    p->play();
    delete p; // 未执行子类的析构函数未被调用，有可能造成内存泄漏; 需在Person的析构函数前添加virtual，Soldier里的会被继承，但建议也加上
    p = NULL;
    cout << "test1()" << endl;  // 会实例化一个临时对象，调用完play()后，被销毁了
    Person p1; Soldier s1;
    test1(p1); test1(s1);

    cout << "test2()" << endl;  // 由于是引用，起了一个别名p，用别名p来调用play()，并没有实例化一个临时对象
    Person p2; Soldier s2;
    test2(p2); test2(s2);

    cout << "test3()" << endl;  // 与test2()的结果是一致的，并没有产生新的临时对象，效率更高
    Person p3; Soldier s3;
    test3(&p3); test3(&s3);

    cout << "test end" << endl;

    return 0;
}